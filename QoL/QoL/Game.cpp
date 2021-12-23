#include "pch.h"

using namespace std;

bool Game::ValidateGameVersion()
{
    HMODULE GameModules[1024];
    HANDLE GameProcess;
    DWORD cbNeeded;

    GameProcess = GetCurrentProcess();

    if (EnumProcessModules(GameProcess, GameModules, sizeof(GameModules), &cbNeeded))
    {
        for (unsigned int i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
        {
            TCHAR szModName[MAX_PATH];

            if (GetModuleFileNameEx(GameProcess, GameModules[i], szModName, sizeof(szModName) / sizeof(TCHAR)))
            {
                if (_tcsstr(szModName, _T("maluc.dll")))
                    return true;
            }
        }
    }

    return false;
}