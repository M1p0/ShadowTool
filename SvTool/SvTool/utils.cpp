#include <windows.h>
#include "Hw_event.h"
#include <iostream>
#include "lvlup.h"
#include <process.h>
#include "utils.h"
using namespace std;

HHOOK keyboardHook = 0;
LRESULT CALLBACK HookCallback(int code, WPARAM wParam, LPARAM lParam)
{
    KBDLLHOOKSTRUCT *ks = (KBDLLHOOKSTRUCT*)lParam;

    if (ks->vkCode == 27)
    {
        system("taskkill /IM SvTool.exe");
        return 1;
    }
    return CallNextHookEx(0, code, wParam, lParam);
}


unsigned __stdcall Stop(void *pArgument)
{

    keyboardHook = SetWindowsHookExA(WH_KEYBOARD_LL, HookCallback, GetModuleHandleA(0), 0);

    MSG msg;
    while (1)
    {
        if (PeekMessageA(&msg, 0, 0, 0, PM_REMOVE))
        {

            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
        else
            Sleep(1);    //避免CPU全负载运行
    }
    UnhookWindowsHookEx(keyboardHook);

    _endthreadex(0);
    return 0;

}

unsigned __stdcall Lock(void *pArgument)
{
    while (1)
    {
        HWND wnd = FindWindow(NULL, "Shadowverse");
        SwitchToThisWindow(wnd, true);//activate window
        SetWindowPos(wnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE);//move SV to (0,0)
        Sleep(100);
    }


    _endthreadex(0);
    return 0;

}