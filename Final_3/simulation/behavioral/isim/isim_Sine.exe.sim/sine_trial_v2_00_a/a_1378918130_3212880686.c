/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ITI_references/Digital_IC_course/FPGA_prototype/Project/Final_3/pcores/sine_trial_v2_00_a/hdl/vhdl/sine_top.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void sine_trial_v2_00_a_a_1378918130_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6176);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 3888U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3888U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    if (t8 == 0)
        goto LAB11;

LAB14:    if (t8 == 1)
        goto LAB12;

LAB15:
LAB13:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = (unsigned char)0;

LAB28:    if (t2 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 4128U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);

LAB24:
LAB10:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t0 + 6432);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 9U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB11:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 6304);
    t7 = (t1 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 6368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t1 = (t0 + 3888U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 4128U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 5;
    goto LAB10;

LAB12:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 4128U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);

LAB18:    goto LAB10;

LAB16:;
LAB17:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 6304);
    t7 = (t1 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 6368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t1 = (t0 + 3888U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    goto LAB18;

LAB20:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB22;

LAB23:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 6304);
    t7 = (t1 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 6368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4008U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t2 = (t8 > 1);
    if (t2 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 6304);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 6368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB30:    goto LAB24;

LAB26:    t1 = (t0 + 3592U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB28;

LAB29:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3888U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4008U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t12 = (t8 - 1);
    t1 = (t0 + 4008U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    goto LAB30;

}

static void sine_trial_v2_00_a_a_1378918130_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(148, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 6192);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void sine_trial_v2_00_a_a_1378918130_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(149, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 6208);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void sine_trial_v2_00_a_a_1378918130_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(150, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 6224);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void sine_trial_v2_00_a_a_1378918130_3212880686_init()
{
	static char *pe[] = {(void *)sine_trial_v2_00_a_a_1378918130_3212880686_p_0,(void *)sine_trial_v2_00_a_a_1378918130_3212880686_p_1,(void *)sine_trial_v2_00_a_a_1378918130_3212880686_p_2,(void *)sine_trial_v2_00_a_a_1378918130_3212880686_p_3};
	xsi_register_didat("sine_trial_v2_00_a_a_1378918130_3212880686", "isim/isim_Sine.exe.sim/sine_trial_v2_00_a/a_1378918130_3212880686.didat");
	xsi_register_executes(pe);
}
