/*
 * File: H_leg.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 01-Apr-2020 16:26:48
 */

/* Include Files */
#include "H_leg.h"
#include "Forward_kinematics_v2.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */

/*
 * H_LEG
 *     H_FULL = H_LEG(ETA_I,IN2,IN3)
 * Arguments    : double eta_i
 *                const double in2[5]
 *                const double in3[3]
 *                double H_full[16]
 * Return Type  : void
 */
void H_leg(double eta_i, const double in2[5], const double in3[3], double
           H_full[16])
{
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  double t10;
  double t11;
  double t12;
  double t13;
  double t20;
  double t21;
  double t16;
  double t22;
  double t23;
  double t24;
  double t25;
  double t26;
  double t32;
  double t33;
  double t45_tmp;
  double t45;
  double t51;
  double t53;
  double t54;
  double t62_tmp;
  double t133;
  double t50;
  double t60;
  double t61;
  double t63;
  double t64;
  double t130;
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
  t4 = cos(eta_i);
  t5 = cos(in3[0]);
  t6 = cos(in3[1]);
  t7 = cos(in3[2]);
  t8 = sin(in2[0]);
  t9 = sin(in2[1]);
  t10 = sin(eta_i);
  t11 = sin(in3[0]);
  t12 = sin(in3[1]);
  t13 = sin(in3[2]);
  t20 = in2[2] / 2.0;
  t21 = in2[3] / 2.0;
  t16 = t5 * t10;
  t22 = t4 * t5;
  t23 = cos(t20);
  t24 = cos(t21);
  t25 = sin(t20);
  t26 = sin(t21);
  t20 = t23 * t23;
  t21 = t24 * t24;
  t32 = t25 * t25;
  t33 = t26 * t26;
  t45_tmp = t2 * t4;
  t45 = t16 + t45_tmp * t11;
  t51 = t2 * t23 * t25 * 2.0;
  t53 = t5 * t8 * t23 * t25 * 2.0;
  t54 = t4 * t11 * t23 * t25 * 2.0;
  t62_tmp = t8 * t11;
  t133 = t2 * t10;
  t50 = t22 + -(t133 * t11);
  t60 = t22 * t51;
  t61 = t16 * t51;
  t63 = t20 + -t32;
  t64 = t21 + -t33;
  t130 = t12 * t24 * t26;
  t83 = t130 * t50 * 2.0;
  t5 = t5 * t20 + -(t5 * t32);
  t68 = t6 * t21 + -(t6 * t33);
  t16 = t11 * t20 + -(t11 * t32);
  t21 = t12 * t21 + -(t12 * t33);
  t20 = t8 * t10;
  t103 = (t54 + t61) + t20 * t63;
  t22 = t4 * t8;
  t105 = (-(t10 * t11 * t23 * t25 * 2.0) + t60) + t22 * t63;
  t85 = t7 * t12 + t13 * t68;
  t86 = t6 * t13 + t7 * t21;
  t93 = t51 + t8 * t5;
  t106 = (-(t20 * t23 * t25 * 2.0) + t4 * t16) + t133 * t5;
  t108_tmp = t7 * t24 * t26;
  t51 = t6 * t7 + -(t13 * t21);
  t20 = t6 * t24 * t26;
  t101 = t20 * t93 * 2.0;
  t107 = (t22 * t23 * t25 * 2.0 + t10 * t16) + -(t45_tmp * t5);
  t118 = t20 * t106 * 2.0;
  t128 = (t83 + t64 * t103) + t118;
  t22 = t13 * t24 * t26;
  t126_tmp = t53 - t2 * t63;
  t126 = (t62_tmp * t51 + t22 * t126_tmp * -2.0) + t85 * t93;
  t129 = (t130 * t45 * 2.0 + -(t64 * t105)) + t20 * t107 * 2.0;
  t21 = t12 * t13 - t7 * t68;
  t130 = (t45 * t86 + t108_tmp * t105 * 2.0) + -t107 * t21;
  t133 = (t50 * t51 + t22 * t103 * 2.0) + -(t85 * t106);
  t20 = (-(t45 * t51) + t22 * t105 * 2.0) + t85 * t107;
  t45_tmp = t3 * t10;
  t63 = t9 * t10;
  t51 = (-(t50 * t86) + t108_tmp * t103 * 2.0) + t106 * t21;
  H_full[0] = (t4 * t133 + t45_tmp * t51) + t63 * t128;
  H_full[1] = (t4 * t20 + t45_tmp * t130) - t63 * t129;
  t5 = (-(t62_tmp * t12 * t24 * t26 * 2.0) + t101) + t64 * t126_tmp;
  t16 = (t62_tmp * t86 + t93 * t21) + t108_tmp * t126_tmp * 2.0;
  H_full[2] = (-t4 * t126 + t63 * t5) + t45_tmp * t16;
  H_full[3] = 0.0;
  t45_tmp = t3 * t4;
  t63 = t4 * t9;
  H_full[4] = (-t10 * t133 + t45_tmp * t51) + t63 * t128;
  H_full[5] = (-t10 * t20 + t45_tmp * t130) - t63 * t129;
  H_full[6] = (t10 * t126 + t63 * t5) + t45_tmp * t16;
  H_full[7] = 0.0;
  H_full[8] = t3 * t128 - t9 * t51;
  H_full[9] = -t3 * t129 - t9 * t130;
  H_full[10] = -t9 * t16 + t3 * t5;
  H_full[11] = 0.0;
  t22 = in2[4] * t8;
  t45_tmp = t22 * t10;
  t63 = in2[4] * t33;
  t21 = in2[4] * (t9 * t9);
  t20 = in2[4] * t3 * t9;
  H_full[12] = (((((((in2[4] * t54 + in2[4] * t61) + in2[4] * t83) + in2[4] *
                    t118) + t45_tmp) - t63 * t103 * 2.0) - t21 * t128) - t45_tmp
                * t32 * 2.0) - t20 * t51;
  t45_tmp = in2[4] * t4 * t8;
  H_full[13] = (((((((in2[4] * t60 + t45_tmp) - t63 * t105 * 2.0) + t21 * t129)
                   - t45_tmp * t32 * 2.0) - t20 * t130) - in2[4] * t10 * t11 *
                 t23 * t25 * 2.0) - in2[4] * t12 * t24 * t26 * t45 * 2.0) - in2
    [4] * t6 * t24 * t26 * t107 * 2.0;
  H_full[14] = (((((in2[4] * t53 + in2[4] * t101) - t21 * t5) + in2[4] * t2 *
                  t32 * 2.0) - t63 * t126_tmp * 2.0) - t20 * t16) - t22 * t11 *
    t12 * t24 * t26 * 2.0;
  H_full[15] = 1.0;
}

/*
 * File trailer for H_leg.c
 *
 * [EOF]
 */
