#include <windows.h>
#include "Hw_event.h"
#include <iostream>
#include "lvlup.h"
#include <process.h>
#include "utils.h"
using namespace std;
int counter = 0;
double Proportion;

int main()
{

    Resolution res = GetResolution();
    Proportion = res.Width / 1920.0;
    cout << "Proportion:" << Proportion << endl;
    int select;
    HANDLE STOP;
    STOP = (HANDLE)_beginthreadex(NULL, 0, &Stop, NULL, 0, NULL);
    cout << "M1p0太菜了 本科技只能在屏幕分辨率1920*1080下使用" << endl;
    cout << "请确保SV已将分辨率设置为窗口化1280*720" << endl;
    cout << "并且游戏画面在主页面" << endl;
    cout << "游戏内按ESC可退出程序" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
Reselect:
    cout << "请选择职业(输入序号)" << endl;
    cout << "0.鼠标坐标" << endl;
    cout << "1.Elf" << endl;
    cout << "2.Royal" << endl;
    cin >> select;
    switch (select)
    {
    case 0:
        MousePos();
        break;
    case 1:
        elf();
        break;
    case 2:
        Royal();
    default:
        cout << "请输入正确的序号" << endl;
        goto Reselect;
        break;
    }






}