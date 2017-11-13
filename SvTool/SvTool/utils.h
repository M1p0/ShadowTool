#pragma once

struct Resolution
{
    double Width=0;
    double Height=0;
};

unsigned __stdcall Lock(void *pArgument);
unsigned __stdcall Stop(void *pArgument);
void MousePos();
Resolution GetResolution();
void Monitor_Off();