#include <windows.h>
#include "Hw_event.h"
#include <iostream>
#include "lvlup.h"
#include <process.h>
#include "utils.h"
using namespace std;





int main()
{
    int select;
    HANDLE STOP;
    STOP = (HANDLE)_beginthreadex(NULL, 0, &Stop, NULL, 0, NULL);
    cout << "请确保SV已将分辨率设置为1280*720" << endl;
    cout << "并且游戏画面在主页面" << endl;
    cout << "游戏内按ESC可退出程序" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "请选择职业" << endl;
    cout << "1.Elf" << endl;
    cin >> select;
    if (select == 1)
    {
        elf();
        cout << "程序将在10s内开始运行" << endl;
    }






}