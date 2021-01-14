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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ITI_references/Digital_IC_course/FPGA_prototype/Project/Final_3/sine_gen_ise/sine_gen_ise/sine_top.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1378918130_3212880686_p_0(char *t0)
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
    t1 = (t0 + 936U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3556);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1052U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = (unsigned char)0;

LAB36:    if (t2 != 0)
        goto LAB32;

LAB33:    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = (unsigned char)0;

LAB41:    if (t2 != 0)
        goto LAB37;

LAB38:
LAB6:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2372U);
    t3 = *((char **)t1);
    t1 = (t0 + 3696);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 9U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 2236U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = 0;
    xsi_set_current_line(105, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t3 = t1;
    memset(t3, (unsigned char)2, 9U);
    t4 = (t0 + 2372U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 9U);
    goto LAB6;

LAB8:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2236U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    if (t8 == 0)
        goto LAB11;

LAB14:    if (t8 == 1)
        goto LAB12;

LAB15:
LAB13:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1880U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = (unsigned char)0;

LAB28:    if (t2 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 3660);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t1 = (t0 + 2372U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);

LAB24:
LAB10:    goto LAB6;

LAB11:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3624);
    t7 = (t1 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3660);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2236U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t1 = (t0 + 2236U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1604U);
    t3 = *((char **)t1);
    t1 = (t0 + 2372U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t1 = (t0 + 8108U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 2304U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((int *)t4) = t8;
    goto LAB10;

LAB12:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1788U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1604U);
    t3 = *((char **)t1);
    t1 = (t0 + 2372U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);

LAB18:    goto LAB10;

LAB16:;
LAB17:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3624);
    t7 = (t1 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 3660);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2236U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t1 = (t0 + 2236U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    goto LAB18;

LAB20:    t1 = (t0 + 1972U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB22;

LAB23:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3624);
    t7 = (t1 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3660);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2304U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t2 = (t8 > 1);
    if (t2 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3660);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB30:    goto LAB24;

LAB26:    t1 = (t0 + 2064U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB28;

LAB29:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2236U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2304U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t12 = (t8 - 1);
    t1 = (t0 + 2304U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    goto LAB30;

LAB32:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 3624);
    t7 = (t1 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 1604U);
    t3 = *((char **)t1);
    t1 = (t0 + 2372U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);
    goto LAB6;

LAB34:    t1 = (t0 + 1788U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB36;

LAB37:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 3660);
    t7 = (t1 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t1 = (t0 + 2372U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 9U);
    goto LAB6;

LAB39:    t1 = (t0 + 1880U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB41;

}

static void work_a_1378918130_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(155, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3732);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 3564);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1378918130_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(156, ng0);

LAB3:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3768);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 3572);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1378918130_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(157, ng0);

LAB3:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 3804);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 3580);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1378918130_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1378918130_3212880686_p_0,(void *)work_a_1378918130_3212880686_p_1,(void *)work_a_1378918130_3212880686_p_2,(void *)work_a_1378918130_3212880686_p_3};
	xsi_register_didat("work_a_1378918130_3212880686", "isim/Sine_tb_isim_beh.exe.sim/work/a_1378918130_3212880686.didat");
	xsi_register_executes(pe);
}
