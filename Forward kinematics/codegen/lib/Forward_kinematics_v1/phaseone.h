/*
 * File: phaseone.h
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 01-Apr-2020 16:21:00
 */

#ifndef PHASEONE_H
#define PHASEONE_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Forward_kinematics_v1_types.h"

/* Function Declarations */
extern void phaseone(const double H[36], const double f[7], d_struct_T *solution,
                     c_struct_T *memspace, f_struct_T *workingset, i_struct_T
                     *qrmanager, k_struct_T *cholmanager, j_struct_T *objective,
                     b_struct_T *options);

#endif

/*
 * File trailer for phaseone.h
 *
 * [EOF]
 */
