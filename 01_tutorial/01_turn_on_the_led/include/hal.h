#ifndef HAL_H_
#define HAL_H_

#include "io.h"

#ifdef __cplusplus
extern "C"{

class CLED:public CIO_Output_OST_High
{
public:
    CLED(void);
};

class CHAL
{
public:
    CLED LED;
};

}
#endif
#endif