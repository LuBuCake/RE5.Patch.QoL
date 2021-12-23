#include "pch.h"

bool Hook(LPVOID* Address, BYTE* Function, int IntructionLength) {
    if (IntructionLength < 5) {
        return false;
    }

    DWORD CurrentProtection;
    VirtualProtect(Address, IntructionLength, PAGE_EXECUTE_READWRITE, &CurrentProtection);

    memset(Address, 0x90, IntructionLength);

    DWORD relativeAddress = ((DWORD)Function - (DWORD)Address) - 5;

    *(BYTE*)Address = 0xE9;
    *(DWORD*)((DWORD)Address + 1) = relativeAddress;

    DWORD TemporaryProtection;
    VirtualProtect(Address, IntructionLength, CurrentProtection, &TemporaryProtection);

    return true;
}