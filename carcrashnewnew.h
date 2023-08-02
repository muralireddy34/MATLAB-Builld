/*
 * File: carcrashnewnew.h
 *
 * Code generated for Simulink model 'carcrashnewnew'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
 * C/C++ source code generated on : Mon Jul 31 13:18:09 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_carcrashnewnew_h_
#define RTW_HEADER_carcrashnewnew_h_
#ifndef carcrashnewnew_COMMON_INCLUDES_
# define carcrashnewnew_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* carcrashnewnew_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Model entry point functions */
extern void carcrashnewnew_initialize(void);
extern void carcrashnewnew_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'carcrashnewnew'
 * '<S1>'   : 'carcrashnewnew/Controller'
 * '<S2>'   : 'carcrashnewnew/Controller/Carcrash'
 * '<S3>'   : 'carcrashnewnew/Controller/If Action Subsystem'
 */
#endif                                 /* RTW_HEADER_carcrashnewnew_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
