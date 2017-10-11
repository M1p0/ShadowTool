#pragma once

struct Resolution
{
    double Width;
    double Height;
};

unsigned __stdcall Lock(void *pArgument);
unsigned __stdcall Stop(void *pArgument);
void MousePos();
Resolution GetResolution();