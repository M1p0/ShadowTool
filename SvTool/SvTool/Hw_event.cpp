#include "Hw_event.h"
#include "utils.h"
using namespace std;


template <class T>
T MIN(T num1, T num2)
{
    return num1 < num2 ? num1 : num2;
}

template <class T>
T MAX(T num1, T num2)
{
    return num1 > num2 ? num1 : num2;
}

void SetMouse(POINT pos)
{
    SetCursorPos(pos.x, pos.y);
}

void SetMouse(int x, int y)
{
    SetCursorPos(x, y);
}

void LeftDown()
{
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
}

void LeftUp()
{
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}


void RightDown()
{
    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
}

void RightUp()
{
    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
}

void LeftClick()
{
    mouse_event(MOUSEEVENTF_LEFTDOWN , 0, 0, 0, 0);
    Sleep(100);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

void RightClick()
{
    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
}


void SetDelay(int time)
{
    Sleep(time);
}

void Mouse_MoveTo(POINT start, POINT end, int Speed)
{
    POINT point1, point2, temp;
    double x, y;
    point1 = start;
    temp = point1;
    point2 = end;
    SetMouse(point1);
    if (point1.x == point2.x)
    {
        x = point1.x;
        for (int i = MIN(point1.y, point2.y); i <= MAX(point1.y, point2.y); i++)
        {
            y = temp.y;
            if (point1.y < point2.y)
            {
                temp.y++;
            }
            else
            {
                temp.y--;
            }
            SetMouse(x, y);
            Sleep(Speed);
        }
    }

    else if (point1.y == point2.y)
    {
        y = point1.y;
        for (int i = MIN(point1.x, point2.x); i <= MAX(point1.x, point2.x); i++)
        {
            x = temp.x;
            if (point1.x < point2.x)
            {
                temp.x++;
            }
            else
            {
                temp.x--;
            }
            SetMouse(x, y);
            Sleep(Speed);
        }
    }

    else
    {
        for (int i = MIN(point1.x, point2.x); i <= MAX(point1.x, point2.x); i++)
        {
            x = temp.x;
            y = (x - point1.x)*(point2.y - point1.y) / (point2.x - point1.x) + point1.y;
            if (point1.x < point2.x)
            {
                temp.x++;
            }
            else
            {
                temp.x--;
            }
            SetMouse(x, y);
            Sleep(Speed);
        }
    }

}
#undef time

void Drag(POINT start, POINT end, int Speed)
{
    SetMouse(start);
    LeftDown();
    Mouse_MoveTo(start, end, Speed);
    LeftUp();
}

void Drag(int sx, int sy, int ex, int ey, int Speed)
{
    POINT start, end;
    start.x = sx;
    start.y = sy;
    end.x = ex;
    end.y = ey;
    SetMouse(start);
    LeftDown();
    Mouse_MoveTo(start, end, Speed);
    LeftUp();
}

void DelayClick()
{
    LeftDown();
    Sleep(1000);
    LeftUp();
}