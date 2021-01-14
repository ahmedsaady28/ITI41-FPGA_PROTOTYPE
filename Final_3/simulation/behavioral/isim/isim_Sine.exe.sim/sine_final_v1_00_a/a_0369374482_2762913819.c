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
static const char *ng0 = "E:/ITI_references/Digital_IC_course/FPGA_prototype/Project/Final_3/pcores/sine_final_v1_00_a/hdl/vhdl/sine_gen.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1654179537_1035706684(char *, char *, int , char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1922276087_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110411308_1035706684(char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void sine_final_v1_00_a_a_0369374482_2762913819_p_0(char *t0)
{
    char t9[16];
    char t14[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    static char *nl0[] = {&&LAB12, &&LAB12, &&LAB12, &&LAB11, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12};
    static char *nl1[] = {&&LAB21, &&LAB21, &&LAB21, &&LAB20, &&LAB21, &&LAB21, &&LAB21, &&LAB21, &&LAB21};

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2648U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t1 = (t0 + 2528U);
    t4 = *((char **)t1);
    t23 = *((int *)t4);
    t5 = (t20 == t23);
    if (t5 == 1)
        goto LAB31;

LAB32:    t2 = (unsigned char)0;

LAB33:    if (t2 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;

LAB29:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t9, t20, 9);
    t4 = (t0 + 4752);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 9U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3008U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4816);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2528U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = 0;
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 3008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2768U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2648U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2768U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB10:    goto LAB6;

LAB11:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t7 = (t0 + 8660U);
    t10 = (t0 + 1192U);
    t11 = *((char **)t10);
    t10 = (t0 + 8676U);
    t12 = ieee_p_1242562249_sub_1654179537_1035706684(IEEE_P_1242562249, t9, 2, t11, t10);
    t13 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t8, t7, t12, t9);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2528U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;

LAB14:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2288U);
    t3 = *((char **)t1);
    t1 = (t0 + 8708U);
    t20 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t1);
    t23 = (t20 * 4);
    t4 = (t0 + 2528U);
    t7 = *((char **)t4);
    t24 = *((int *)t7);
    t25 = (t23 / t24);
    t4 = (t0 + 3368U);
    t8 = *((char **)t4);
    t4 = (t8 + 0);
    *((int *)t4) = t25;
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2768U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2648U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB10;

LAB12:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2528U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t2 = (t20 < 2);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl1) + t2);
    goto **((char **)t1);

LAB13:    xsi_set_current_line(43, ng0);
    t15 = (t0 + 1032U);
    t16 = *((char **)t15);
    t15 = (t0 + 8660U);
    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t17 = (t0 + 8676U);
    t19 = ieee_p_1242562249_sub_1922276087_1035706684(IEEE_P_1242562249, t14, t16, t15, t18, t17);
    t20 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t19, t14);
    t21 = (t0 + 2528U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((int *)t21) = t20;
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB14;

LAB16:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2528U);
    t4 = *((char **)t1);
    t23 = *((int *)t4);
    t1 = (t0 + 2648U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t23;

LAB17:    goto LAB10;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 3248U);
    t7 = *((char **)t4);
    t20 = *((int *)t7);
    t4 = (t0 + 3368U);
    t8 = *((char **)t4);
    t23 = *((int *)t8);
    t24 = (t20 + t23);
    t4 = (t0 + 3248U);
    t10 = *((char **)t4);
    t4 = (t10 + 0);
    *((int *)t4) = t24;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2648U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t23 = (t20 + 1);
    t1 = (t0 + 2648U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t23;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t1 = (t0 + 2288U);
    t4 = *((char **)t1);
    t1 = (t0 + 8708U);
    t23 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t1);
    t2 = (t20 >= t23);
    if (t2 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;

LAB23:    goto LAB19;

LAB21:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t1 = (t0 + 3368U);
    t4 = *((char **)t1);
    t23 = *((int *)t4);
    t24 = (t20 - t23);
    t1 = (t0 + 3248U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t24;
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2648U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t23 = (t20 + 1);
    t1 = (t0 + 2648U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t23;
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t1 = (t0 + 2408U);
    t4 = *((char **)t1);
    t1 = (t0 + 8724U);
    t23 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t1);
    t2 = (t20 <= t23);
    if (t2 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;

LAB26:    goto LAB19;

LAB22:    xsi_set_current_line(64, ng0);
    t7 = (t0 + 2288U);
    t8 = *((char **)t7);
    t7 = (t0 + 8708U);
    t24 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t8, t7);
    t10 = (t0 + 3248U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t24;
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB23;

LAB25:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 2408U);
    t8 = *((char **)t7);
    t7 = (t0 + 8724U);
    t24 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t8, t7);
    t10 = (t0 + 3248U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t24;
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB26;

LAB28:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3008U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2768U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2648U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB29;

LAB31:    t1 = (t0 + 2768U);
    t7 = *((char **)t1);
    t6 = *((unsigned char *)t7);
    t13 = (t6 != (unsigned char)3);
    t2 = t13;
    goto LAB33;

}


extern void sine_final_v1_00_a_a_0369374482_2762913819_init()
{
	static char *pe[] = {(void *)sine_final_v1_00_a_a_0369374482_2762913819_p_0};
	xsi_register_didat("sine_final_v1_00_a_a_0369374482_2762913819", "isim/isim_Sine.exe.sim/sine_final_v1_00_a/a_0369374482_2762913819.didat");
	xsi_register_executes(pe);
}
