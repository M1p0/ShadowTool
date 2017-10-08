#include "Hw_event.h"

int main()
{
    HWND wnd = FindWindow(NULL, "Shadowverse");
    SwitchToThisWindow(wnd, true);//activate window
    SetWindowPos(wnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE);//move SV to (0,0)
    POINT start, end;
    start.x = 814;
    start.y = 691;
    end.x = 816;
    end.y = 300;
    SetMouse(814, 691);
    LeftClick();
    Sleep(1000);
    Drag(814, 691, 816, 300);
    Sleep(1000);
    Drag(814, 691, 816, 300);

    Sleep(5000);
    SetMouse(1174, 385);
    LeftClick();//end turn
}

