/*
 * BMS_FixPoint_data.c
 *
 * Code generation for model "BMS_FixPoint".
 *
 * Model version              : 8.27
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 *
 */

#include "BMS_FixPoint.h"

/* Invariant block signals (default storage) */
const ConstB ConstB_s = {
  55000,                               /* '<S40>/Add2' */
  -100,                                /* '<S37>/Divide1' */
  9,                                   /* '<S23>/Math Function1' */
  9,                                   /* '<S33>/Add5' */
  1,                                   /* '<S21>/Minus' */
  9,                                   /* '<S27>/Add5' */
  9,                                   /* '<S28>/Add5' */
  false                                /* '<S7>/Constant' */
};

/* Constant parameters (default storage) */
const ConstP ConstP_s = {
  /* Pooled Parameter (Expression: P_OCVAxis_mV)
   * Referenced by:
   *   '<S34>/OCV_DSG'
   *   '<S20>/OCV_DSG'
   *   '<S23>/SOC_Slope'
   */
  { 3000, 3150, 3300, 3400, 3500, 3600, 3700, 3800, 4000, 4152, 4300, 4400 },

  /* Computed Parameter: DCIR_Discharge_tableData
   * Referenced by: '<S34>/DCIR_Discharge'
   */
  { 103, 339, 188, 99, 303, 177, 70, 244, 114, 49, 220, 113, 47, 157, 103, 46,
    93, 49, 45, 78, 47, 43, 67, 43, 44, 69, 43, 44, 65, 40, 40, 61, 64, 40, 59,
    84 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S34>/DCIR_Discharge'
   *   '<S34>/OCV_DSG'
   *   '<S13>/OCV_DSG'
   *   '<S20>/OCV_DSG'
   *   '<S24>/DCIR_Discharge'
   *   '<S24>/OCV_Discharge'
   *   '<S24>/R0_Discharge'
   */
  { 2U, 11U }
};
