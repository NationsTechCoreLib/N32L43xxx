1、功能说明
    1、SLEEP模式的进入和退出。


2、使用环境

    软件开发环境：KEIL MDK-ARM V5.25

    硬件环境：
        1、基于评估板N32L43XML-STB V1.0开发
        2、MCU：N32L436MBL7


3、使用说明
    
    系统配置；
        1、时钟源：HSE+PLL
        2、时钟频率：108Mz/0MHz
        3、串口配置：
            - 串口为USART1（TX：PA9  RX：PA10）:
            - 数据位：  8
            - 停止位：  1
            - 奇偶校验：无
            - 波特率：  115200 


    使用方法：
        在KEIL下编译后烧录到评估板，串接电流表，PC串口工具连接上评估板。上电后串口打印：“MCU Prepare Enter Sleep Mode Core Stop Run”,
        MCU进入SLEEP模式内核停止运行电流明显变小(4.65mA左右)。按下唤醒按键PA0，产生中断唤醒MCU，串口打印:
        “MCU Run In Run Mode Sysclock From PLL(108MHz)” 电流变大(4.97mA左右),如此重复以上实验现象。

4、注意事项
    无



1. Function description
    1. Enter and exit the SLEEP mode.

2. Use environment
    Software development environment: KEIL MDK-ARM V5.25
    Hardware environment:
	1. based on the evaluation board N32L43XML-STB V1.0 development
	2. MCU: N32L436MBL7

3. Instructions for use    
    System configuration;
	1. Clock source: HSE+PLL
	2. Clock frequency: 108MHz
	3. Serial port configuration:
	    - Serial port: USART1 (TX: PA9 RX: PA10) :
	    - Data bit: 8
	    - Stop bit: 1
	    - Parity check: None
	    - Baud rate: 115200
    Instructions:
	After compiling in KEIL, burn it to the evaluation board, connect ammeter in series, and connect the evaluation board with PC serial tool. After the power-on, the serial port displays "MCU Prepare Enter Sleep Mode Core Stop Run". When the MCU enters Sleep Mode, the current of the kernel stopping becomes smaller (about 4.65mA). Press the wake button PA0 to interrupt MCU and wake up. The serial port prints: "MCU Run In Run Mode Sysclock From PLL(108MHz)" The current increases (about 4.97mA), so repeat the above experiment phenomenon.

4. Matters needing attention
    None

