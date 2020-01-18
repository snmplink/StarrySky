#include "led.h"

CLED0::CLED0(void):CIO_Output_OST_High(PortD, Pin0) { }
CLED1::CLED1(void):CIO_Output_OST_High(PortD, Pin1) { }
CLED2::CLED2(void):CIO_Output_OST_High(PortD, Pin2) { }
CLED3::CLED3(void):CIO_Output_OST_High(PortD, Pin3) { }
CLED4::CLED4(void):CIO_Output_OST_High(PortD, Pin4) { }
CLED5::CLED5(void):CIO_Output_OST_High(PortD, Pin5) { }
CLED6::CLED6(void):CIO_Output_OST_High(PortD, Pin6) { }
CLED7::CLED7(void):CIO_Output_OST_High(PortD, Pin7) { }

void CLED::OpenAllLED(void)
{
    this->LED0.Open();
    this->LED1.Open();
    this->LED2.Open();
    this->LED3.Open();
    this->LED4.Open();
    this->LED5.Open();
    this->LED6.Open();
    this->LED7.Open();
}

void CLED::ShutAllLED(void)
{
    this->LED0.Shut();
    this->LED1.Shut();
    this->LED2.Shut();
    this->LED3.Shut();
    this->LED4.Shut();
    this->LED5.Shut();
    this->LED6.Shut();
    this->LED7.Shut();
}
