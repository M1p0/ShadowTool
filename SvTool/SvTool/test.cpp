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
    cout << "��ȷ��SV�ѽ��ֱ�������Ϊ1280*720" << endl;
    cout << "������Ϸ��������ҳ��" << endl;
    cout << "��Ϸ�ڰ�ESC���˳�����" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "��ѡ��ְҵ" << endl;
    cout << "1.Elf" << endl;
    cin >> select;
    if (select == 1)
    {
        elf();
        cout << "������10s�ڿ�ʼ����" << endl;
    }






}