/*
 * File: Weighted_error.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 03-Apr-2020 23:47:49
 */

/* Include Files */
#include "Weighted_error.h"
#include "Forward_kinematics_v1.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */

/*
 * WEIGHTED_ERROR
 *     ERROR = WEIGHTED_ERROR(IN1,IN2,IN3,IN4,IN5)
 * Arguments    : const double in1[5]
 *                const double in3[3]
 *                const double in4[3]
 *                const double in5[3]
 * Return Type  : double
 */
double Weighted_error(const double in1[5], const double in3[3], const double
                      in4[3], const double in5[3])
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
  double t14;
  double t15;
  double t16;
  double t17;
  double t18;
  double t19;
  double t20;
  double t21;
  double t22;
  double t23;
  double t38;
  double t39;
  double t24;
  double t40;
  double t41;
  double t43;
  double t44;
  double t45;
  double t49_tmp;
  double t85_tmp;
  double t85;
  double t52;
  double t53;
  double t54;
  double t55;
  double t107;
  double t108;
  double t109;
  double t114;
  double t171;
  double t116;
  double t117;
  double t118;
  double t127;
  double t138_tmp;
  double t138;
  double t409;
  double t140;
  double t141_tmp;
  double t141;
  double t142;
  double t159;
  double t160;
  double t163;
  double t67;
  double t69;
  double t78;
  double t79;
  double t112;
  double t113;
  double t115;
  double t121;
  double t128;
  double t129;
  double t131;
  double t132;
  double t137;
  double t150;
  double t151;
  double t155;
  double t158;
  double t170;
  double t233;
  double t234;
  double t144;
  double t146;
  double t153;
  double t154;
  double t167;
  double t222;
  double t223;
  double t134;
  double t172;
  double t174;
  double t175;
  double t176;
  double t177;
  double t181;
  double t230;
  double t231;
  double t207;
  double t515;
  double t252;
  double t254;
  double t255;
  double t256;
  double t211;
  double t213;
  double t214;
  double t215;
  double t216;
  double t253;
  double t259;
  double t260;
  double t261;
  double t263;
  double t264;
  double t265;
  double t266;
  double t511;
  double t277;
  double t278_tmp;
  double t279;
  double t509;
  double t283_tmp;
  double t284_tmp;
  double t311;
  double t312_tmp;
  double t312;
  double t316;
  double t340;
  double t351;
  double t360;
  double t227;
  double t297;
  double t309_tmp;
  double t309;
  double t319;
  double t320;
  double t321;
  double t326;
  double t327;
  double t330;
  double t355;
  double t363;
  double t367;
  double t374;
  double t379;
  double t404_tmp;
  double t404;
  double t248;
  double t250;
  double t272;
  double t273;
  double t274;
  double t275;
  double t303;
  double t324;
  double t335;
  double t344;
  double t350;
  double t369;
  double t371;
  double t373;
  double t381;
  double t418;
  double t430_tmp;
  double t430;
  double t364;

  /*     This function was generated by the Symbolic Math Toolbox version 8.4. */
  /*     03-Apr-2020 23:36:01 */
  t2 = cos(in1[0]);
  t3 = cos(in1[1]);
  t4 = cos(in3[0]);
  t5 = cos(in4[0]);
  t6 = cos(in5[0]);
  t7 = cos(in3[1]);
  t8 = cos(in4[1]);
  t9 = cos(in5[1]);
  t10 = cos(in3[2]);
  t11 = cos(in4[2]);
  t12 = cos(in5[2]);
  t13 = sin(in1[0]);
  t14 = sin(in1[1]);
  t15 = sin(in3[0]);
  t16 = sin(in4[0]);
  t17 = sin(in5[0]);
  t18 = sin(in3[1]);
  t19 = sin(in4[1]);
  t20 = sin(in5[1]);
  t21 = sin(in3[2]);
  t22 = sin(in4[2]);
  t23 = sin(in5[2]);
  t38 = in1[2] / 2.0;
  t39 = in1[3] / 2.0;
  t24 = t14 * t14;
  t40 = cos(t38);
  t41 = cos(t39);
  t43 = t6 / 2.0;
  t44 = sin(t38);
  t45 = sin(t39);
  t49_tmp = in1[4] * t13;
  t38 = t2 * t16 / 2.0;
  t85_tmp = t49_tmp * 1.7320508075688772;
  t85 = t85_tmp / 2.0;
  t52 = t40 * t40;
  t53 = t41 * t41;
  t54 = t44 * t44;
  t55 = t45 * t45;
  t107 = t13 * t40 * t44;
  t108 = t16 * t40 * t44;
  t109 = t17 * t40 * t44;
  t114 = t2 * t40 * t44 * 2.0;
  t171 = in1[4] * t15 * t40 * t44;
  t116 = t171 * 2.0;
  t117 = t2 * t5 * t40 * t44;
  t118 = t2 * t6 * t40 * t44;
  t127 = t4 * t18 * t41 * t45 * 2.0;
  t138_tmp = t2 * t15;
  t138 = t138_tmp * t18 * t41 * t45 * 2.0;
  t409 = t13 * t16;
  t140 = t409 * t19 * t41 * t45 * 2.0;
  t141_tmp = t13 * t17;
  t141 = t141_tmp * t20 * t41 * t45 * 2.0;
  t142 = in1[4] * t2 * t4 * t40 * t44 * -2.0;
  t159 = t38 + t5 * 1.7320508075688772 * -0.5;
  t39 = t2 * t17;
  t160 = t43 + t39 * 1.7320508075688772 * -0.5;
  t163 = t49_tmp * t15 * t18 * t41 * t45 * -2.0;
  t67 = t16 * t52;
  t69 = t17 * t52;
  t78 = t16 * t54;
  t79 = t17 * t54;
  t112 = in1[4] * t108;
  t113 = in1[4] * t109;
  t115 = t107 * 2.0;
  t121 = t85_tmp * t54;
  t128 = in1[4] * t117;
  t129 = in1[4] * t118;
  t131 = t5 * t107 * -2.0;
  t132 = t6 * t107 * -2.0;
  t137 = in1[4] * t127;
  t150 = t5 / 2.0 + 1.7320508075688772 * t38;
  t151 = t39 / 2.0 + 1.7320508075688772 * t43;
  t155 = in1[4] * t138;
  t158 = in1[4] * t141;
  t170 = t171 * t55 * 4.0;
  t38 = t19 * t41 * t45;
  t233 = t38 * t159 * 2.0;
  t39 = t20 * t41 * t45;
  t234 = t39 * t160 * 2.0;
  t144 = in1[4] * t132;
  t17 = t52 + -t54;
  t146 = t53 + -t55;
  t153 = 1.7320508075688772 * t112;
  t154 = 1.7320508075688772 * t113;
  t167 = 1.7320508075688772 * t128;
  t222 = t38 * t150 * 2.0;
  t223 = t39 * t151 * 2.0;
  t134 = in1[4] * (t4 * t115);
  t38 = t13 * t17;
  t39 = t2 * t17;
  t171 = t4 * t52 + -(t4 * t54);
  t172 = t5 * t52 + -(t5 * t54);
  t17 = t6 * t52 + -(t6 * t54);
  t174 = t7 * t53 + -(t7 * t55);
  t175 = t8 * t53 + -(t8 * t55);
  t176 = t9 * t53 + -(t9 * t55);
  t177 = t15 * t52 + -(t15 * t54);
  t52 = t18 * t53 + -(t18 * t55);
  t181 = t19 * t53 + -(t19 * t55);
  t53 = t20 * t53 + -(t20 * t55);
  t230 = in1[4] * t222;
  t231 = in1[4] * t223;
  t43 = t38 / 2.0;
  t207 = t2 * t17 / 2.0;
  t515 = t7 * t41 * t45;
  t6 = t515 * t177 * 2.0;
  t252 = t4 * t114 + t38;
  t254 = t4 * t107 * -2.0 + t39;
  t255 = t131 + t39;
  t256 = t132 + t39;
  t39 = 1.7320508075688772 * t43;
  t211 = t10 * t18 + t21 * t174;
  t132 = t11 * t19 + t22 * t175;
  t213 = t12 * t20 + t23 * t176;
  t214 = t7 * t21 + t10 * t52;
  t215 = t8 * t22 + t11 * t181;
  t216 = t9 * t23 + t12 * t53;
  t253 = in1[4] * t6;
  t259 = t114 + t13 * t171;
  t260 = t114 + t13 * t172;
  t261 = t114 + t13 * t17;
  t114 = in1[4] * t55;
  t263 = t114 * t252 * 2.0;
  t264 = t114 * t254 * 2.0;
  t265 = t114 * t255 * 2.0;
  t266 = t114 * t256 * 2.0;
  t511 = t22 * t41 * t45;
  t277 = t511 * t255;
  t278_tmp = t21 * t41 * t45;
  t55 = t23 * t41 * t45;
  t279 = t55 * t256;
  t509 = t10 * t41 * t45;
  t283_tmp = t11 * t41 * t45;
  t284_tmp = t12 * t41 * t45;
  t311 = (t117 + 1.7320508075688772 * t108) + t43;
  t312_tmp = t115 - t2 * t171;
  t312 = in1[4] * t7 * t41 * t45 * t312_tmp * 2.0;
  t316 = (t118 + -(1.7320508075688772 * t109)) + t43;
  t340 = (-t107 + t2 * t172 / 2.0) + 1.7320508075688772 * (t67 + -t78) / 2.0;
  t351 = ((t67 / 2.0 + -(t78 / 2.0)) + 1.7320508075688772 * t107) + t2 *
    1.7320508075688772 * t172 * -0.5;
  t360 = (t127 + t15 * t40 * t44 * t146 * 2.0) + t6;
  t227 = t7 * t10 + -(t21 * t52);
  t17 = t8 * t11 + -(t22 * t181);
  t43 = t9 * t12 + -(t23 * t53);
  t53 = t13 * t15;
  t6 = t515 * t259 * 2.0;
  t38 = t8 * t41 * t45;
  t297 = t38 * t260 * 2.0;
  t309_tmp = in1[4] * t9 * t41 * t45;
  t309 = t309_tmp * t261 * -2.0;
  t118 = (t109 + 1.7320508075688772 * t118) + t39;
  t117 = (-t108 + 1.7320508075688772 * t117) + t39;
  t319 = t114 * t311 * 2.0;
  t320 = t114 * t316 * 2.0;
  t321 = t511 * t311;
  t326 = t132 * t260;
  t327 = t213 * t261;
  t330 = t55 * t316;
  t171 = (t107 + -t207) + 1.7320508075688772 * (t69 + -t79) / 2.0;
  t355 = ((t69 / 2.0 + -(t79 / 2.0)) + 1.7320508075688772 * -t107) +
    1.7320508075688772 * t207;
  t363 = t38 * t340 * 2.0;
  t79 = in1[4] * t24;
  t367 = t79 * t360;
  t108 = t38 * t351 * 2.0;
  t374 = t132 * t340;
  t379 = t132 * t351;
  t404_tmp = (t138 - t146 * t252) + t515 * t312_tmp * 2.0;
  t404 = -in1[4] * t24 * t404_tmp;
  t248 = t409 * t17;
  t250 = t141_tmp * t43;
  t272 = t150 * t17;
  t273 = t151 * t43;
  t274 = t159 * t17;
  t275 = t160 * t43;
  t303 = in1[4] * t6;
  t324 = t114 * t118 * 2.0;
  t335 = t114 * t117 * 2.0;
  t344 = t55 * t118;
  t350 = t511 * t117;
  t39 = t9 * t41 * t45;
  t43 = t39 * t171 * 2.0;
  t369 = in1[4] * t108;
  t371 = t39 * t355 * 2.0;
  t373 = t213 * t171;
  t381 = t213 * t355;
  t38 = t18 * t21 - t10 * t174;
  t418 = (t138_tmp * t214 + t509 * t252 * 2.0) + -(t38 * t312_tmp);
  t109 = (t53 * t214 - t509 * t254 * 2.0) + t259 * t38;
  t207 = -t3 * t109;
  t132 = t19 * t22 - t11 * t175;
  t430_tmp = (t409 * t215 - t283_tmp * t255 * 2.0) + t260 * t132;
  t430 = t14 * t430_tmp;
  t52 = t20 * t23 - t12 * t176;
  t141_tmp = (t141_tmp * t216 - t284_tmp * t256 * 2.0) + t261 * t52;
  t7 = t14 * t141_tmp;
  t13 = (-t233 + t146 * t311) + t363;
  t17 = (t159 * t215 + t283_tmp * t311 * 2.0) + t340 * t132;
  t364 = in1[4] * t43;
  t21 = (t15 * t21 * t40 * t41 * t44 * t45 * 4.0 + t4 * t227) + -(t177 * t211);
  t114 = in1[4] * t14;
  t38 = (t10 * t15 * t40 * t41 * t44 * t45 * 4.0 - t4 * t214) + t177 * t38;
  t23 = t114 * (-t3 * t38);
  t67 = (t53 * t18 * t41 * t45 * 2.0 + -t6) + t146 * t254;
  t2 = (t140 + -t297) + t146 * t255;
  t172 = (t141 + -(t39 * t261 * 2.0)) + t146 * t256;
  t12 = (t53 * t227 + t278_tmp * t254 * 2.0) + t211 * t259;
  t6 = t3 * t418;
  t11 = t114 * t207;
  t255 = in1[4] * t3;
  t259 = t255 * t7;
  t78 = (t223 + -(t146 * t316)) + t43;
  t22 = t79 * t13;
  t127 = t14 * t13 / 2.0;
  t53 = (t234 + t146 * t118) + t371;
  t254 = t3 * t360 + -t14 * t38;
  t360 = t14 * t360 + t3 * t38;
  t39 = (t151 * t216 + t284_tmp * t316 * 2.0) + -t171 * t52;
  t256 = t14 * t17;
  t181 = t3 * t17 / 2.0;
  t55 = (t150 * t215 + t283_tmp * t117 * 2.0) + -t351 * t132;
  t177 = (-(t160 * t216) + t284_tmp * t118 * 2.0) + t355 * t52;
  t24 = -t14 * t177;
  t132 = t79 * t67;
  t214 = t79 * t2;
  t261 = t79 * t172;
  t409 = t14 * t172 / 2.0;
  t311 = t114 * t6;
  t175 = t79 * t78;
  t17 = (t222 + -(t146 * t117)) + t108;
  t52 = t79 * t53;
  t9 = t14 * t53 / 2.0;
  t38 = t14 * t39;
  t43 = t3 * t39 / 2.0;
  t39 = t14 * t55;
  t176 = -t14 * t404_tmp + t6;
  t107 = t79 * t17;
  t6 = t14 * t17 / 2.0;
  t171 = t255 * t38;
  t69 = t255 * t39;
  t174 = t14 * t67 + t207;
  t213 = t3 * t67 + t14 * t109;
  t509 = t3 * t2 + t430;
  t138 = t3 * t172 + t7;
  t511 = t3 * t78 + t38;
  t79 = t3 * t13 + -t256;
  t117 = t3 * t53 + t24;
  t515 = (t14 * t2 / 2.0 + t3 * t430_tmp * -0.5) + 1.7320508075688772 * ((t248 +
    t277 * 2.0) + t326) / 2.0;
  t118 = (((t248 / 2.0 + t277) + t326 / 2.0) + t14 * 1.7320508075688772 * t2 *
          -0.5) + t3 * 1.7320508075688772 * t430_tmp / 2.0;
  t108 = (((t274 / 2.0 + -t321) + t374 / 2.0) + 1.7320508075688772 * t127) +
    1.7320508075688772 * t181;
  t109 = t3 * t17 + t39;
  t17 = t3 * t141_tmp;
  t13 = (((t250 / 2.0 + t279) + t327 / 2.0) + 1.7320508075688772 * t409) +
    1.7320508075688772 * (t17 * -0.5);
  t207 = (t14 * t78 / 2.0 + -t43) + 1.7320508075688772 * ((-t273 + t330 * 2.0) +
    t373) / 2.0;
  t2 = (((-(t273 / 2.0) + t330) + t373 / 2.0) + t14 * 1.7320508075688772 * t78 *
        -0.5) + 1.7320508075688772 * t43;
  t7 = (((t275 / 2.0 + t344) + -(t381 / 2.0)) + 1.7320508075688772 * t9) + t3 *
    1.7320508075688772 * t177 / 2.0;
  t78 = (t127 + t181) + -(1.7320508075688772 * ((t274 + -(t321 * 2.0)) + t374) /
    2.0);
  t127 = (-t6 + t3 * t55 / 2.0) + 1.7320508075688772 * ((-t272 + t350 * 2.0) +
    t379) / 2.0;
  t181 = (((-(t272 / 2.0) + t350) + t379 / 2.0) + 1.7320508075688772 * t6) + t3 *
    1.7320508075688772 * t55 * -0.5;
  t67 = ((((((((((t134 + t144) + t158) + t163) + t264) + -t266) + t303) + t309)
           + t132) + -t261) + t11) + t259;
  t39 = in1[4] * t8 * t41 * t45;
  t172 = ((((((((((t134 + in1[4] * t140) + t163) + t264) - t265) + t303) + t132)
             - t214) + t11) + in1[4] * t131) + t255 * t430) - t39 * t260 * 2.0;
  t55 = (((((((((((((t85 + t113) + t116) + t137) + 1.7320508075688772 * t129) +
                 -t170) + in1[4] * t234) + t253) + -t324) + -t367) + in1[4] *
            t371) + t23) + -t52) + t255 * t24) + t85_tmp * -t54;
  t114 = ((((((((((((t128 + -t129) + t153) + t154) + t231) - t319) + t320) +
               t364) + in1[4] * t363) - t22) + -t175) + t171) + t255 * -t256) -
    in1[4] * t19 * t41 * t45 * t159 * 2.0;
  t132 = ((((((((((((((t112 - t113) + t121 * 2.0) - t167) + t230) + t324) + t335)
                 + t369) + t52) - t107) + t69) + 1.7320508075688772 * -t129) -
            t85_tmp) + t255 * t14 * t177) - in1[4] * t20 * t41 * t45 * t160 *
          2.0) - t309_tmp * t355 * 2.0;
  t38 = -(t49_tmp * 1.5) + t49_tmp * t54 * 3.0;
  t53 = ((((((((((((t38 - t128) + t142) - t153) + t155) + in1[4] * t233) + t263)
              + t312) + t319) + t404) + t311) + t22) + t255 * t256) - t39 * t340
    * 2.0;
  t52 = ((((((((((((t38 + t142) + -t129) + t154) + t155) + t231) + t263) + t312)
             + t320) + t364) + t404) + t311) + -t175) + t171;
  t6 = (((((((((((((-t85 + t112) + t116) + t121) + t137) - t167) + -t170) + t230)
             + t253) + t335) + t369) + -t367) + t23) - t107) + t69;
  t171 = ((((((((((in1[4] * (t5 * t115) + t144) + t158) + t265) + -t266) + in1[4]
               * t297) + t309) + t214) + -t261) + t255 * (-t14 * t430_tmp)) +
          t259) - t49_tmp * t16 * t19 * t41 * t45 * 2.0;
  t43 = (-t409 + 1.7320508075688772 * ((t250 + t279 * 2.0) + t327) / 2.0) + t17 /
    2.0;
  t17 = (t9 - 1.7320508075688772 * ((t275 + t344 * 2.0) + -t381) / 2.0) + t3 *
    t177 / 2.0;
  t39 = t14 * t418 + t3 * t404_tmp;
  t38 = (-(t138_tmp * t227) + t278_tmp * t252 * 2.0) + t211 * t312_tmp;
  return ((((((((t67 * t67 + t172 * t172) + t55 * t55) + t114 * t114) + t132 *
              t132) + t53 * t53) + t52 * t52) + t6 * t6) + t171 * t171) + 1000.0
    * ((((((((((((((((((((((((((-t21 * t7 + t21 * t181) + t12 * t13) + t12 *
    t118) + t254 * t117) + t254 * t109) + t360 * t127) - t213 * t509) - t213 *
    t138) - t509 * t138) + t174 * t515) + t511 * t79) - t176 * t78) + t176 *
                    t207) - t117 * t109) - t13 * t118) + t78 * t207) + t2 * t108)
               + t7 * t181) - t174 * t43) + t515 * t43) - t360 * t17) + t127 *
           t17) + t511 * t39) - t79 * t39) - t2 * t38) + t108 * t38);
}

/*
 * File trailer for Weighted_error.c
 *
 * [EOF]
 */
