/*
 * File: H_leg.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 03-Apr-2020 23:47:49
 */

/* Include Files */
#include "H_leg.h"
#include "Forward_kinematics_v1.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */

/*
 * H_LEG
 *     H_FULL = H_LEG(ETA_I,IN2,IN3)
 * Arguments    : const double in2[5]
 *                const double in3[3]
 *                double H_full[16]
 * Return Type  : void
 */
void H_leg(const double in2[5], const double in3[3], double H_full[16])
{
  double t2;
  double t3;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  double t11;
  double t12;
  double t13;
  double t20;
  double t21;
  double t16;
  double t23;
  double t24;
  double t25;
  double t26;
  double t32;
  double t33;
  double t45;
  double t51;
  double t53;
  double t54;
  double t62_tmp;
  double t50;
  double t60;
  double t61;
  double t63;
  double t64;
  double t83_tmp;
  double t83;
  double t68;
  double t103;
  double t105;
  double t85;
  double t86;
  double t93;
  double t106;
  double t108_tmp;
  double t101;
  double t107;
  double t118;
  double t128;
  double t126_tmp;
  double t126;
  double t129;

  /*     This function was generated by the Symbolic Math Toolbox version 8.4. */
  /*     01-Apr-2020 11:27:58 */
  t2 = cos(in2[0]);
  t3 = cos(in2[1]);
  t5 = cos(in3[0]);
  t6 = cos(in3[1]);
  t7 = cos(in3[2]);
  t8 = sin(in2[0]);
  t9 = sin(in2[1]);
  t11 = sin(in3[0]);
  t12 = sin(in3[1]);
  t13 = sin(in3[2]);
  t20 = in2[2] / 2.0;
  t21 = in2[3] / 2.0;
  t16 = t5 * 0.0;
  t23 = cos(t20);
  t24 = cos(t21);
  t25 = sin(t20);
  t26 = sin(t21);
  t20 = t23 * t23;
  t21 = t24 * t24;
  t32 = t25 * t25;
  t33 = t26 * t26;
  t45 = t16 + t2 * t11;
  t51 = t2 * t23 * t25 * 2.0;
  t53 = t5 * t8 * t23 * t25 * 2.0;
  t54 = t11 * t23 * t25 * 2.0;
  t62_tmp = t8 * t11;
  t50 = t5 + -(t2 * 0.0 * t11);
  t60 = t5 * t51;
  t61 = t16 * t51;
  t63 = t20 + -t32;
  t64 = t21 + -t33;
  t83_tmp = t12 * t24 * t26;
  t83 = t83_tmp * t50 * 2.0;
  t5 = t5 * t20 + -(t5 * t32);
  t68 = t6 * t21 + -(t6 * t33);
  t16 = t11 * t20 + -(t11 * t32);
  t20 = t12 * t21 + -(t12 * t33);
  t103 = (t54 + t61) + t8 * 0.0 * t63;
  t105 = (-(0.0 * t11 * t23 * t25 * 2.0) + t60) + t8 * t63;
  t85 = t7 * t12 + t13 * t68;
  t86 = t6 * t13 + t7 * t20;
  t93 = t51 + t8 * t5;
  t106 = (-(t8 * 0.0 * t23 * t25 * 2.0) + t16) + t2 * 0.0 * t5;
  t108_tmp = t7 * t24 * t26;
  t51 = t6 * t7 + -(t13 * t20);
  t20 = t6 * t24 * t26;
  t101 = t20 * t93 * 2.0;
  t107 = (t8 * t23 * t25 * 2.0 + 0.0 * t16) + -(t2 * t5);
  t118 = t20 * t106 * 2.0;
  t128 = (t83 + t64 * t103) + t118;
  t5 = t13 * t24 * t26;
  t126_tmp = t53 - t2 * t63;
  t126 = (t62_tmp * t51 + t5 * t126_tmp * -2.0) + t85 * t93;
  t129 = (t83_tmp * t45 * 2.0 + -(t64 * t105)) + t20 * t107 * 2.0;
  t21 = t12 * t13 - t7 * t68;
  t7 = (t45 * t86 + t108_tmp * t105 * 2.0) + -t107 * t21;
  t16 = (t50 * t51 + t5 * t103 * 2.0) + -(t85 * t106);
  t20 = (-(t45 * t51) + t5 * t105 * 2.0) + t85 * t107;
  t68 = (-(t50 * t86) + t108_tmp * t103 * 2.0) + t106 * t21;
  H_full[0] = (t16 + t3 * 0.0 * t68) + t9 * 0.0 * t128;
  H_full[1] = (t20 + t3 * 0.0 * t7) - t9 * 0.0 * t129;
  t83_tmp = (-(t62_tmp * t12 * t24 * t26 * 2.0) + t101) + t64 * t126_tmp;
  t63 = (t62_tmp * t86 + t93 * t21) + t108_tmp * t126_tmp * 2.0;
  H_full[2] = (-t126 + t9 * 0.0 * t83_tmp) + t3 * 0.0 * t63;
  H_full[3] = 0.0;
  H_full[4] = (-0.0 * t16 + t3 * t68) + t9 * t128;
  H_full[5] = (-0.0 * t20 + t3 * t7) - t9 * t129;
  H_full[6] = (0.0 * t126 + t9 * t83_tmp) + t3 * t63;
  H_full[7] = 0.0;
  H_full[8] = t3 * t128 - t9 * t68;
  H_full[9] = -t3 * t129 - t9 * t7;
  H_full[10] = -t9 * t63 + t3 * t83_tmp;
  H_full[11] = 0.0;
  t5 = in2[4] * t8;
  t51 = t5 * 0.0;
  t21 = in2[4] * t33;
  t16 = in2[4] * (t9 * t9);
  t20 = in2[4] * t3 * t9;
  H_full[12] = (((((((in2[4] * t54 + in2[4] * t61) + in2[4] * t83) + in2[4] *
                    t118) + t51) - t21 * t103 * 2.0) - t16 * t128) - t51 * t32 *
                2.0) - t20 * t68;
  H_full[13] = (((((((in2[4] * t60 + t5) - t21 * t105 * 2.0) + t16 * t129) - t5 *
                   t32 * 2.0) - t20 * t7) - in2[4] * 0.0 * t11 * t23 * t25 * 2.0)
                - in2[4] * t12 * t24 * t26 * t45 * 2.0) - in2[4] * t6 * t24 *
    t26 * t107 * 2.0;
  H_full[14] = (((((in2[4] * t53 + in2[4] * t101) - t16 * t83_tmp) + in2[4] * t2
                  * t32 * 2.0) - t21 * t126_tmp * 2.0) - t20 * t63) - t5 * t11 *
    t12 * t24 * t26 * 2.0;
  H_full[15] = 1.0;
}

/*
 * File trailer for H_leg.c
 *
 * [EOF]
 */
