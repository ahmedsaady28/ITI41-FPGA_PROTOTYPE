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
static const char *ng0 = "E:/ITI_references/Digital_IC_course/FPGA_prototype/Project/Final_3/sine_gen_ise/sine_gen_ise/Sine_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


static void work_a_2452206012_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1964U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2340);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1864);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2340);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1864);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2452206012_2372691052_p_1(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    int64 t10;
    unsigned int t11;
    unsigned char t12;
    unsigned int t13;

LAB0:    t1 = (t0 + 2108U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 10, 8);
    t4 = (t0 + 2412);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(108, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 20, 8);
    t4 = (t0 + 2448);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(109, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 100, 8);
    t4 = (t0 + 2484);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 1, 5);
    t4 = (t0 + 2520);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (4 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 102, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB14;

LAB15:    t12 = 0;

LAB16:    if (t12 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(120, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 5, 8);
    t4 = (t0 + 2412);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (2 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t9 = (t0 + 5536);
    xsi_report(t9, 40U, (unsigned char)2);
    goto LAB13;

LAB14:    t13 = 0;

LAB17:    if (t13 < 9U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB26;

LAB27:    t12 = 0;

LAB28:    if (t12 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (4 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t9 = (t0 + 5576);
    xsi_report(t9, 27U, (unsigned char)2);
    goto LAB25;

LAB26:    t13 = 0;

LAB29:    if (t13 < 9U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB27;

LAB31:    t13 = (t13 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB38;

LAB39:    t12 = 0;

LAB40:    if (t12 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (3 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t9 = (t0 + 5603);
    xsi_report(t9, 27U, (unsigned char)2);
    goto LAB37;

LAB38:    t13 = 0;

LAB41:    if (t13 < 9U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB39;

LAB43:    t13 = (t13 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 51, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB50;

LAB51:    t12 = 0;

LAB52:    if (t12 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (3 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t9 = (t0 + 5630);
    xsi_report(t9, 13U, (unsigned char)2);
    goto LAB49;

LAB50:    t13 = 0;

LAB53:    if (t13 < 9U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB51;

LAB55:    t13 = (t13 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 102, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB62;

LAB63:    t12 = 0;

LAB64:    if (t12 == 0)
        goto LAB60;

LAB61:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    t9 = (t0 + 5643);
    xsi_report(t9, 29U, (unsigned char)2);
    goto LAB61;

LAB62:    t13 = 0;

LAB65:    if (t13 < 9U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB63;

LAB67:    t13 = (t13 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 153, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB74;

LAB75:    t12 = 0;

LAB76:    if (t12 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (2 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    t9 = (t0 + 5672);
    xsi_report(t9, 59U, (unsigned char)2);
    goto LAB73;

LAB74:    t13 = 0;

LAB77:    if (t13 < 9U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB75;

LAB79:    t13 = (t13 + 1);
    goto LAB77;

LAB80:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 204, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB86;

LAB87:    t12 = 0;

LAB88:    if (t12 == 0)
        goto LAB84;

LAB85:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (17 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    t9 = (t0 + 5731);
    xsi_report(t9, 28U, (unsigned char)2);
    goto LAB85;

LAB86:    t13 = 0;

LAB89:    if (t13 < 9U)
        goto LAB90;
    else
        goto LAB88;

LAB90:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB87;

LAB91:    t13 = (t13 + 1);
    goto LAB89;

LAB92:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB98;

LAB99:    t12 = 0;

LAB100:    if (t12 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (6 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    t9 = (t0 + 5759);
    xsi_report(t9, 31U, (unsigned char)2);
    goto LAB97;

LAB98:    t13 = 0;

LAB101:    if (t13 < 9U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB99;

LAB103:    t13 = (t13 + 1);
    goto LAB101;

LAB104:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB110;

LAB111:    t12 = 0;

LAB112:    if ((!(t12)) == 0)
        goto LAB108;

LAB109:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    t9 = (t0 + 5790);
    xsi_report(t9, 32U, (unsigned char)2);
    goto LAB109;

LAB110:    t13 = 0;

LAB113:    if (t13 < 9U)
        goto LAB114;
    else
        goto LAB112;

LAB114:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB111;

LAB115:    t13 = (t13 + 1);
    goto LAB113;

LAB116:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB122;

LAB123:    t12 = 0;

LAB124:    if (t12 == 0)
        goto LAB120;

LAB121:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(200, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 100, 8);
    t4 = (t0 + 2412);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(201, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 200, 8);
    t4 = (t0 + 2448);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(202, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 100, 8);
    t4 = (t0 + 2484);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(203, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 1, 5);
    t4 = (t0 + 2520);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB130:    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

LAB120:    t9 = (t0 + 5822);
    xsi_report(t9, 29U, (unsigned char)2);
    goto LAB121;

LAB122:    t13 = 0;

LAB125:    if (t13 < 9U)
        goto LAB126;
    else
        goto LAB124;

LAB126:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB123;

LAB127:    t13 = (t13 + 1);
    goto LAB125;

LAB128:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB134;

LAB135:    t12 = 0;

LAB136:    if (t12 == 0)
        goto LAB132;

LAB133:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB142:    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB129:    goto LAB128;

LAB131:    goto LAB129;

LAB132:    t9 = (t0 + 5851);
    xsi_report(t9, 10U, (unsigned char)2);
    goto LAB133;

LAB134:    t13 = 0;

LAB137:    if (t13 < 9U)
        goto LAB138;
    else
        goto LAB136;

LAB138:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB135;

LAB139:    t13 = (t13 + 1);
    goto LAB137;

LAB140:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB146;

LAB147:    t12 = 0;

LAB148:    if (t12 == 0)
        goto LAB144;

LAB145:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB154:    *((char **)t1) = &&LAB155;
    goto LAB1;

LAB141:    goto LAB140;

LAB143:    goto LAB141;

LAB144:    t9 = (t0 + 5861);
    xsi_report(t9, 17U, (unsigned char)2);
    goto LAB145;

LAB146:    t13 = 0;

LAB149:    if (t13 < 9U)
        goto LAB150;
    else
        goto LAB148;

LAB150:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB147;

LAB151:    t13 = (t13 + 1);
    goto LAB149;

LAB152:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB158;

LAB159:    t12 = 0;

LAB160:    if (t12 == 0)
        goto LAB156;

LAB157:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(230, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 200, 8);
    t4 = (t0 + 2412);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(231, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 20, 8);
    t4 = (t0 + 2448);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(232, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 100, 8);
    t4 = (t0 + 2484);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(233, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, 2, 5);
    t4 = (t0 + 2520);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB166:    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB153:    goto LAB152;

LAB155:    goto LAB153;

LAB156:    t9 = (t0 + 5878);
    xsi_report(t9, 17U, (unsigned char)2);
    goto LAB157;

LAB158:    t13 = 0;

LAB161:    if (t13 < 9U)
        goto LAB162;
    else
        goto LAB160;

LAB162:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB159;

LAB163:    t13 = (t13 + 1);
    goto LAB161;

LAB164:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB170;

LAB171:    t12 = 0;

LAB172:    if (t12 == 0)
        goto LAB168;

LAB169:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (1 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB178:    *((char **)t1) = &&LAB179;
    goto LAB1;

LAB165:    goto LAB164;

LAB167:    goto LAB165;

LAB168:    t9 = (t0 + 5895);
    xsi_report(t9, 10U, (unsigned char)2);
    goto LAB169;

LAB170:    t13 = 0;

LAB173:    if (t13 < 9U)
        goto LAB174;
    else
        goto LAB172;

LAB174:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB171;

LAB175:    t13 = (t13 + 1);
    goto LAB173;

LAB176:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB182;

LAB183:    t12 = 0;

LAB184:    if (t12 == 0)
        goto LAB180;

LAB181:    xsi_set_current_line(249, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(250, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (5 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB190:    *((char **)t1) = &&LAB191;
    goto LAB1;

LAB177:    goto LAB176;

LAB179:    goto LAB177;

LAB180:    t9 = (t0 + 5905);
    xsi_report(t9, 35U, (unsigned char)2);
    goto LAB181;

LAB182:    t13 = 0;

LAB185:    if (t13 < 9U)
        goto LAB186;
    else
        goto LAB184;

LAB186:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB183;

LAB187:    t13 = (t13 + 1);
    goto LAB185;

LAB188:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 204, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB194;

LAB195:    t12 = 0;

LAB196:    if (t12 == 0)
        goto LAB192;

LAB193:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (4 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB202:    *((char **)t1) = &&LAB203;
    goto LAB1;

LAB189:    goto LAB188;

LAB191:    goto LAB189;

LAB192:    t9 = (t0 + 5940);
    xsi_report(t9, 11U, (unsigned char)2);
    goto LAB193;

LAB194:    t13 = 0;

LAB197:    if (t13 < 9U)
        goto LAB198;
    else
        goto LAB196;

LAB198:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB195;

LAB199:    t13 = (t13 + 1);
    goto LAB197;

LAB200:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB206;

LAB207:    t12 = 0;

LAB208:    if ((!(t12)) == 0)
        goto LAB204;

LAB205:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (8 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB214:    *((char **)t1) = &&LAB215;
    goto LAB1;

LAB201:    goto LAB200;

LAB203:    goto LAB201;

LAB204:    t9 = (t0 + 5951);
    xsi_report(t9, 11U, (unsigned char)2);
    goto LAB205;

LAB206:    t13 = 0;

LAB209:    if (t13 < 9U)
        goto LAB210;
    else
        goto LAB208;

LAB210:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB207;

LAB211:    t13 = (t13 + 1);
    goto LAB209;

LAB212:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB218;

LAB219:    t12 = 0;

LAB220:    if ((!(t12)) == 0)
        goto LAB216;

LAB217:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 2376);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 2556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t10 = (2 * t3);
    t2 = (t0 + 2008);
    xsi_process_wait(t2, t10);

LAB226:    *((char **)t1) = &&LAB227;
    goto LAB1;

LAB213:    goto LAB212;

LAB215:    goto LAB213;

LAB216:    t9 = (t0 + 5962);
    xsi_report(t9, 27U, (unsigned char)2);
    goto LAB217;

LAB218:    t13 = 0;

LAB221:    if (t13 < 9U)
        goto LAB222;
    else
        goto LAB220;

LAB222:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB219;

LAB223:    t13 = (t13 + 1);
    goto LAB221;

LAB224:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, 0, 9);
    t5 = (t8 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t12 = 1;
    if (9U == t11)
        goto LAB230;

LAB231:    t12 = 0;

LAB232:    if (t12 == 0)
        goto LAB228;

LAB229:    xsi_set_current_line(282, ng0);

LAB238:    *((char **)t1) = &&LAB239;
    goto LAB1;

LAB225:    goto LAB224;

LAB227:    goto LAB225;

LAB228:    t9 = (t0 + 5989);
    xsi_report(t9, 25U, (unsigned char)2);
    goto LAB229;

LAB230:    t13 = 0;

LAB233:    if (t13 < 9U)
        goto LAB234;
    else
        goto LAB232;

LAB234:    t6 = (t4 + t13);
    t7 = (t2 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB231;

LAB235:    t13 = (t13 + 1);
    goto LAB233;

LAB236:    goto LAB2;

LAB237:    goto LAB236;

LAB239:    goto LAB237;

}


extern void work_a_2452206012_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2452206012_2372691052_p_0,(void *)work_a_2452206012_2372691052_p_1};
	xsi_register_didat("work_a_2452206012_2372691052", "isim/Sine_tb_isim_beh.exe.sim/work/a_2452206012_2372691052.didat");
	xsi_register_executes(pe);
}
