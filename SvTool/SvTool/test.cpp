#include <windows.h>
#include "Hw_event.h"

int main()
{
    //SWP_NOSIZE
    HWND wnd = FindWindow(NULL, "Shadowverse");
    SwitchToThisWindow(wnd, true);//activate window
    SetWindowPos(wnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE);//move SV to (0,0)
    POINT start;
    POINT end;
    start.x = 924;
    start.y = 522;
    end.x = 1203;
    end.y = 58;
    Drag(start, end);//drag test


}