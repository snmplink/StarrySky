/**
 * 根据项目需要加入相应库的头文件
 */
#include "hal.h"
#include "time.h"

/**
 * 根据项目需要添加成员变量
 */
class CTarget
{
public:
  CHAL HAL;
  CTime Time;
} Target;

/**
 * 初始化设置函数
 */
void setup() 
{
  Target.HAL.LED.ShutAllLED();
}

/**
 * 后台无限循环
 */
void loop() 
{
  Target.HAL.LED.LED0.Open();
  Target.HAL.LED.LED7.Open();
  Target.Time.Delayms(200);
  Target.HAL.LED.LED1.Open();
  Target.HAL.LED.LED6.Open();
  Target.Time.Delayms(200);
  Target.HAL.LED.LED2.Open();
  Target.HAL.LED.LED5.Open();
  Target.Time.Delayms(200);
  Target.HAL.LED.LED3.Open();
  Target.HAL.LED.LED4.Open();
  Target.Time.Delayms(200);
  Target.HAL.LED.ShutAllLED();
  Target.Time.Delayms(200);
}
