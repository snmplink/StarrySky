#ifndef LED_H_
#define LED_H_

#include "io.h"

#ifdef __cplusplus
extern "C"{

class CLED0:public CIO_Output_OST_High
{
public:
    CLED0(void);
};

class CLED1:public CIO_Output_OST_High
{
public:
    CLED1(void);
};

class CLED2:public CIO_Output_OST_High
{
public:
    CLED2(void);
};

class CLED3:public CIO_Output_OST_High
{
public:
    CLED3(void);
};

class CLED4:public CIO_Output_OST_High
{
public:
    CLED4(void);
};

class CLED5:public CIO_Output_OST_High
{
public:
    CLED5(void);
};

class CLED6:public CIO_Output_OST_High
{
public:
    CLED6(void);
};

class CLED7:public CIO_Output_OST_High
{
public:
    CLED7(void);
};

class CLED
{
public:
    CLED0 LED0;
    CLED1 LED1;
    CLED2 LED2;
    CLED3 LED3;
    CLED4 LED4;
    CLED5 LED5;
    CLED6 LED6;
    CLED7 LED7;
public:
    void OpenAllLED(void);
    void ShutAllLED(void);
};

}
#endif
#endif