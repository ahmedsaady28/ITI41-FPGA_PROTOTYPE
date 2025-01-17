/*
 * Copyright (c) 2009-2012 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */


#include <stdio.h>
#include "platform.h"
#include "xparameters.h"
void print(char *str);

int sine(int f1,int f2,int f_s,int n_waves,int en)
{
unsigned int * addr = (unsigned int *) XPAR_SINE_FINAL_0_BASEADDR;
addr[0] = f1 ;
addr[1] = f2 ;
addr[2] = f_s;
addr[3] = n_waves;
addr[4] = en ;
return addr[5];
}

int lock(unsigned int code)
{
	unsigned int * addr = (unsigned int *) XPAR_DOOR_LOCK_0_BASEADDR;
	addr[0] = code;
	return addr[1];

}

int main()
{
    init_platform();
    int f1_wrong = 50, f2_wrong = 1,f_correct = 30, f_s = 100, n_waves = 3,en =1;

    unsigned int wrong_code=13,reset=11,correct_code=166660;

    int out,out_door;

    out_door = lock(wrong_code);

    if (out_door == 1)
    {
    out_door = lock(reset);
    out=sine(f1_wrong,f2_wrong,f_s,n_waves,en);
    }

    if (out_door == 0)
    {
        out_door = lock(reset);
        out=sine(f_correct,f_correct,f_s,n_waves,en);
    }


    xil_printf("Alarm status = %d",out_door);

    return 0;
}
