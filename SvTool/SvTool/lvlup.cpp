#include "lvlup.h"
#include <iostream>
#include "Hw_event.h"
#include <process.h>
#include "utils.h"
using namespace std;
extern double Proportion;
extern int counter;


void initial()
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
}



void elf()
{
    initial();

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
    Sleep(18000); //wait for battle

    SetMouse(648, 663); //OK
    LeftClick();
    Sleep(4000);
    //first turn
    Sleep(2000);
    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(2500);
    Drag(738, 684, 696, 319);
    Sleep(2500);
    SetMouse(1173, 386);
    LeftClick();// end turn

    //second turn
    Sleep(18000);
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
    Sleep(3000); //elf1

    Drag(814, 691, 816, 300, 300);
    Sleep(5000);
    SetMouse(1174, 385);
    LeftClick();//end turn

    //third turn

    Sleep(14000); //enemy turn&wait for OK

    SetMouse(645, 659);
    LeftClick();//OK
    Sleep(3000);
    Drag(668, 692, 652, 328); //Sylvan Justice
    Sleep(2000);
    SetMouse(649, 262);
    LeftClick();
    //DelayClick();//Select enemy
    Sleep(2000);

    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(1500);
    Drag(814, 691, 816, 300, 300);//elf2
    Sleep(7000);
    SetMouse(649, 548);//OK
    LeftClick();

    Sleep(2000);
    Drag(738, 684, 696, 319);
    Sleep(2500);
    SetMouse(649, 262);
    LeftClick();//Select enemy
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
    Sleep(6000);//envolving

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
    counter++;
    goto Loop;
    return;
}


void Royal()
{
    initial();

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

    SetMouse(275, 535);  //Select Royal
    LeftClick();
    Sleep(1000);
    SetMouse(1190, 530);  //OK
    LeftClick();
    Sleep(3000);


    SetMouse(920, 500); //Select Stage
    Sleep(2000);
Royal_Loop:
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
    Sleep(18000); //wait for battle

    //first turn 
    SetMouse(647, 666);
    LeftClick();
    Sleep(1500);

    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(2500);
    Drag(817, 681, 841, 295); //ninja
    Sleep(4000);
    SetMouse(648, 667);
    LeftClick();//OK

    Sleep(1500);
    Drag(744, 692, 757, 394);
    Sleep(3000);
    SetMouse(1174, 385);
    LeftClick();//end turn

    //enemy turn
    Sleep(10000);
    SetMouse(652, 546);
    LeftClick();//OK


    //Second turn

    Sleep(9000);
    SetMouse(650, 666);
    LeftClick(); //OK
    Sleep(2500);
    SetMouse(990, 701);//maximum deck
    LeftClick();
    Sleep(1000);
    Drag(749, 693, 761, 395);
    Sleep(5000);
    SetMouse(650, 548);
    LeftClick();//OK
    Sleep(1500);
    Drag(577, 436, 656, 96);//Attack

    Sleep(15000);
    SetMouse(647, 552);
    LeftClick();//OK


    Sleep(6000);//skip
    SetMouse(1200, 75);
    LeftClick();

    Sleep(2500);//confirm
    SetMouse(800, 555);
    LeftClick();

    Sleep(7000);//loading
    counter++;
    goto Royal_Loop;
    return;

}




void Witch()
{
   
    initial();
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

    SetMouse(419, 526);  //Select Witch
    LeftClick();
    Sleep(1000);
    SetMouse(1190, 530);  //OK
    LeftClick();
    Sleep(3000);


    SetMouse(920, 500); //Select Stage
    Sleep(2000);
Witch_Loop:
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
    Sleep(18000); //wait for battle

    SetMouse(650, 664);
    Sleep(1000);
    LeftClick();
    Sleep(2000);

    SetMouse(985, 697);//maximum deck
    LeftClick();


    Drag(644, 687, 647, 333); //2 hit 1
    Sleep(1500);

    SetMouse(651, 96);//select enemy
    LeftClick();
    Sleep(3000);


    SetMouse(642, 662);//OK


    Sleep(3000);
    SetMouse(642, 662);//OK
    LeftClick();
    Sleep(1500);
    SetMouse(985, 697);//maximum deck
    LeftClick();

    Sleep(2000);
    Drag(803, 687, 747, 317);  //card stone

    Sleep(3500);
    SetMouse(650, 545);//OK
    LeftClick();
    Sleep(1000);

    SetMouse(1171, 392);//end turn 
    LeftClick();

    //enemy turn
    Sleep(12000);

    //second turn
    SetMouse(646, 544);
    Sleep(1000);
    LeftClick();//OK


    Sleep(2500);
    Drag(646, 690, 641, 261, 100);
    Sleep(1000);
    SetMouse(641, 261); //Select enemy;
    Sleep(1500);
    LeftClick();
    Sleep(3500);

    SetMouse(644, 660);
    LeftClick();//OK

    Sleep(2000);
    SetMouse(985, 697);//maximum deck
    LeftClick();
    Sleep(2500);

    Drag(737, 676, 647, 333); //533
    Sleep(1500);
    SetMouse(641, 261); //Select enemy;
    LeftClick();
    Sleep(4500);

    SetMouse(648, 549);//OK
    LeftClick();
    Sleep(2500);


    SetMouse(571, 422);  //select stone
    LeftClick();
    Sleep(1500);

    SetMouse(245, 359);
    LeftClick();
    Sleep(1500);//envolve

    SetMouse(646, 547);//confirm
    LeftClick();

    Sleep(6000);//envolving

    Drag(580, 434, 643, 101);//attack
    Sleep(13000);//ending

    SetMouse(650, 550);//OK
    LeftClick();
    Sleep(3000); //loading


    Sleep(3000);//skip
    SetMouse(1200, 75);
    LeftClick();

    Sleep(2500);//confirm
    SetMouse(800, 555);
    LeftClick();

    Sleep(7000);//loading
    counter++;
    goto Witch_Loop;
    return;
}

