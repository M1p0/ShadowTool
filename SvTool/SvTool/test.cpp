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


    int select;
    HANDLE STOP;
    STOP = (HANDLE)_beginthreadex(NULL, 0, &Stop, NULL, 0, NULL);
    cout << "M1p0̫���� ���Ƽ�ֻ������Ļ�ֱ���1920*1080��ʹ��(����)" << endl;
    cout << "��ȷ���ѽ�SV�ֱ�������Ϊ���ڻ�1280*720" << endl;
    cout << "������Ϸ��������ҳ��(�ܿ�����ҵĽ���)" << endl;
    cout << "��Ϸ�ڰ�ESC���˳�����" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "ע��!!��Ϸһ��Ҫ����Ϊ�������� ���ֻ�Ӱ������" << endl;
    cout << "--------------------------------------------------" << endl;
Reselect:
    cout << "��ѡ��ְҵ(�������)" << endl;
    cout << "0.�������" << endl;
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
        break;
    case 3:
        Witch();
        break;
    default:
        cout << "��������ȷ�����" << endl;
        goto Reselect;
        break;
    }






}