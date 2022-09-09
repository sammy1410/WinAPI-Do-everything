#ifndef INPUTDATA_SEEN_INCLUDED
#define INPUTDATA_SEEN_INCLUDED

#include <includes.h>

#define MOUSE_BUF_MAX 50


//KeyBoard Inputs
#define KEY_DOWN(vk_code)  ((GetAsyncKeyState(vk_code))&0x8000 ? 1:0)

static int preState=0x30;
BYTE key[256];

//Arduino DATA 
char *ArduinoRbuf;
char *ArduinoWBuf;
int LenRbuf,LenWbuf;

//Mouse Inputs
POINT mouse;  //coordinates
BOOL mouseLdown=0;
BOOL mouseRdown=0;
BOOL mouseMdown=0;

int M_ScrollDown=0;
int M_ScrollUp=0;

BOOL LbuttonHolding=0;
BOOL MbuttonHolding=0;
BOOL RbuttonHolding=0;

float LbuttonHoldTime=0;
float MbuttonHoldTime=0;
float RbuttonHoldTime=0;

FCOORD mouseBuffer[MOUSE_BUF_MAX];
int M_writeBuf=0;
int M_readBuf=0;


#endif