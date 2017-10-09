#include "lvlup.h"
#include <iostream>
#include "Hw_event.h"
#include <process.h>
#include "utils.h"
using namespace std;

//extern HANDLE STARTELF;




void elf()
{
    HWND wnd = FindWindow(NULL, "Shadowverse");
    if (wnd == 0)
    {
        cout << "Çë´ò¿ªSV" << endl;
        return;
    }
    SwitchToThisWindow(wnd, true);//activate window
    SetWindowPos(wnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE);//move SV to (0,0)

    HANDLE LockWindow;
    LockWindow = (HANDLE)_beginthreadex(NULL, 0, &Lock, NULL, 0, NULL);

    SetMouse(130, 690);  //home
    LeftClick();
    Sleep(3000);
    SetMouse(130, 690);
    LeftClick();
    Sleep(3000);


    SetMouse(300, 690);  //solo
    LeftClick();
    Sleep(3000);




    SetMouse(400, 400);  //Main Story
    LeftClick();
    Sleep(5000);

    SetMouse(120, 500);  //Select Elf
    LeftClick();
    Sleep(1000);
    SetMouse(1190, 530);  //OK
    LeftClick();
    Sleep(3000);


    SetMouse(920, 500); //Select Stage
    Sleep(2000);
Loop:
    Drag(920, 500, 1056, 30);
    Drag(920, 500, 1056, 30);
    Drag(920, 500, 1056, 30);
    Drag(920, 500, 1056, 30);
    Sleep(1000);
    SetMouse(910, 510);//chapter 1
    LeftClick();
    Sleep(4000);
    SetMouse(800, 660);
    LeftClick();    //OK
    Sleep(5000);

    SetMouse(620, 380);  //Skip
    LeftClick();
    Sleep(1500);
    SetMouse(620, 380);
    LeftClick();
    Sleep(1500);
    SetMouse(620, 380);
    LeftClick();
    Sleep(4500);

    SetMouse(1200, 80); //Skip
    LeftClick();
    Sleep(1500);

    SetMouse(800, 550);
    LeftClick();
    Sleep(15000); //wait for battle

    SetMouse(648, 663); //OK
    LeftClick();
    Sleep(2500);
    //first turn
    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(1500);
    Drag(738, 684, 696, 319);
    Sleep(2500);
    SetMouse(1173, 386);
    LeftClick();// end turn

    //second turn
    Sleep(15000);
    SetMouse(648, 663);
    LeftClick(); //OK
    Sleep(2500);

    Drag(647, 440, 651, 245); //hit
    Sleep(6000);
    SetMouse(645, 552);
    LeftClick(); //OK
    Sleep(10);
    LeftUp();
    Sleep(1500);
    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(5000);
    //system("elf.exe");
    
    Drag(814, 691, 816, 300,300);
    Sleep(5000);
    SetMouse(1174, 385);
    LeftClick();//end turn

    //third turn

    Sleep(12000); //enemy turn

    SetMouse(645, 659);
    LeftClick();//OK
    Sleep(2000);
    Drag(668, 692, 652, 328); //Sylvan Justice
    Sleep(2000);
    SetMouse(649, 262); 
    DelayClick();//Select enemy
    Sleep(2000);

    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(1500);
    Drag(814, 691, 816, 300, 300);//elf2
    Sleep(5000);
    SetMouse(649, 548);//OK
    LeftClick();

    Sleep(2000);
    Drag(738, 684, 696, 319);
    Sleep(2500);
    SetMouse(649, 262);
    DelayClick();//Select enemy
    Sleep(5000);

    SetMouse(650, 550);//OK;
    LeftClick();

    Sleep(1000);
    SetMouse(436, 436); //Select
    LeftClick();
    Sleep(1000);
    SetMouse(252, 358); //Evolve
    Sleep(1000);
    LeftClick();
    Sleep(1000);
    SetMouse(650, 550);
    LeftClick(); //confirm
    Sleep(5000);//envolving

    //attack
    Drag(432, 435, 650, 111);
    Sleep(2000);

    Drag(575, 440, 650, 111);
    Sleep(14000);//finish


    SetMouse(645, 547);
    LeftClick();//Ok

    Sleep(6000);//skip
    SetMouse(1200, 75);
    LeftClick();

    Sleep(2500);//confirm
    SetMouse(800, 555);
    LeftClick();

    Sleep(7000);//loading
    goto Loop;
    return;

}

