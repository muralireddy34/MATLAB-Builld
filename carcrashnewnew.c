/*
 * File: carcrashnewnew.c
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

#include "carcrashnewnew.h"

extern void Carcrash(uint8_T rtu_In1, uint8_T rtu_In2, uint8_T rtu_In3, uint8_T
                     rtu_In4, uint8_T rtu_In5, uint8_T rtu_In6, boolean_T
                     rtu_In7, boolean_T rtu_In8, boolean_T rtu_In9, boolean_T
                     rtu_In10, uint8_T *rty_Out1, uint8_T *rty_Out2, uint8_T
                     *rty_Out3, uint8_T *rty_Out4, uint8_T *rty_Out5, uint8_T
                     *rty_Out6, boolean_T *rty_Out7, boolean_T *rty_Out8,
                     boolean_T *rty_Out9, boolean_T *rty_Out10);

/* Output and update for action system: '<S1>/Carcrash' */
void Carcrash(uint8_T rtu_In1, uint8_T rtu_In2, uint8_T rtu_In3, uint8_T rtu_In4,
              uint8_T rtu_In5, uint8_T rtu_In6, boolean_T rtu_In7, boolean_T
              rtu_In8, boolean_T rtu_In9, boolean_T rtu_In10, uint8_T *rty_Out1,
              uint8_T *rty_Out2, uint8_T *rty_Out3, uint8_T *rty_Out4, uint8_T
              *rty_Out5, uint8_T *rty_Out6, boolean_T *rty_Out7, boolean_T
              *rty_Out8, boolean_T *rty_Out9, boolean_T *rty_Out10)
{
  /* Inport: '<S2>/In1' */
  *rty_Out1 = rtu_In1;

  /* Inport: '<S2>/In2' */
  *rty_Out2 = rtu_In2;

  /* Inport: '<S2>/In3' */
  *rty_Out3 = rtu_In3;

  /* Inport: '<S2>/In4' */
  *rty_Out4 = rtu_In4;

  /* Inport: '<S2>/In5' */
  *rty_Out5 = rtu_In5;

  /* Inport: '<S2>/In6' */
  *rty_Out6 = rtu_In6;

  /* Inport: '<S2>/In7' */
  *rty_Out7 = rtu_In7;

  /* Inport: '<S2>/In8' */
  *rty_Out8 = rtu_In8;

  /* Inport: '<S2>/In9' */
  *rty_Out9 = rtu_In9;

  /* Inport: '<S2>/In10' */
  *rty_Out10 = rtu_In10;
}

/* Model step function */
void carcrashnewnew_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void carcrashnewnew_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
