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
  
}

/**
 * 后台无限循环
 */
void loop() 
{
  Target.HAL.LED.Turn();
  Target.Time.Delayms(1000);
}
