#include "pch.h"

using namespace Mod;

bool Utils::Hook(LPVOID ToHook, LPVOID Hook, LPVOID JumpBack, int Length)
{
	DWORD P;
	BOOL PB = VirtualProtect(ToHook, Length, PAGE_EXECUTE_READWRITE, &P);

	if (!PB) return PB;

	memset(ToHook, 0x90, Length);

	*(BYTE*)ToHook = 0xE9;
	*(DWORD*)((DWORD)ToHook + 1) = ((DWORD)Hook - (DWORD)ToHook) - 5;

	if (JumpBack != NULL)
		*(DWORD*)JumpBack = (DWORD)ToHook + Length;

	DWORD C;
	BOOL CB = VirtualProtect(ToHook, Length, P, &C);

	if (!CB) return CB;

	return true;
}

DWORD Utils::GetThreadID(int ID)
{
	HANDLE Toolhelp32Snapshot;
	THREADENTRY32 ThreadEntry;

	Toolhelp32Snapshot = CreateToolhelp32Snapshot(4u, 0);

	if (Toolhelp32Snapshot == (HANDLE)-1)
		return 0;

	ThreadEntry.dwSize = 28;

	if (!Thread32First(Toolhelp32Snapshot, &ThreadEntry))
	{
		CloseHandle(Toolhelp32Snapshot);
		return 0;
	}

	while (ThreadEntry.th32OwnerProcessID != ID)
	{
		if (!Thread32Next(Toolhelp32Snapshot, &ThreadEntry))
		{
			CloseHandle(Toolhelp32Snapshot);
			return 0;
		}
	}

	CloseHandle(Toolhelp32Snapshot);
	return ThreadEntry.th32ThreadID;
}