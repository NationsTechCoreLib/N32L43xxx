1、功能说明
    1、STANDBY模式的进入和退出。


2、使用环境

    软件开发环境：KEIL MDK-ARM V5.25

    硬件环境：
        1、基于评估板N32L43XML-STB V1.0开发
        2、MCU：N32L436MBL7


3、使用说明
    
    系统配置；
        1、时钟源：  HSE+PLL/MSI
        2、时钟频率：108MHz(Run Mode)/0MHz(Standby Mode)
        3、串口配置：
            - 串口为    USART2（TX：PA9  RX：PA10）:
            - 数据位：  8
            - 停止位：  1
            - 奇偶校验：无
            - 波特率：  115200 

    使用方法：
        在KEIL下编译后烧录到评估板，接上电流表，上电后发现电流由mA降到了uA级别，MCU打印“MCU Goto Standby!”
        按下唤醒按键(PA0),电流又回到了mA级别，过了一会又降到uA,并打印“MCU Reset”。
                     
                 
4、注意事项
    在评估功耗的时候，要注意去掉LED去测


1. Function description
    1. Enter and exit STANDBY mode.

2. Use environment
    Software development environment: KEIL MDK-ARM V5.25
    Hardware environment:
	1. Based on the evaluation board N32L43XML-STB V1.0 development
	2. MCU: N32L436MBL7

3. Instructions for use   
    System configuration;
	1. Clock source: HSE+PLL
	2. Clock frequency: 108MHz(Run Mode)/0MHz(Standby Mode)
	3. Serial port configuration:
	    - Serial port: USART1 (TX: PA9 RX: PA10) :
	    - Data bit: 8
	    - Stop bit: 1
	    - Parity check: None
	    - Baud rate: 115200
               
    Instructions:
	After compiling under KEIL, it was burned to the evaluation board, connected to the ammeter, and found that the current dropped from mA to uA level after powering on, and THE MCU printed "MCU Goto Standby!"
	Press the wake up button (PA0), and the current returns to mA level. After a while, it drops to uA and prints "MCU Reset".

4. Matters needing attention
    When evaluating power consumption, take care to remove the LED to measure

