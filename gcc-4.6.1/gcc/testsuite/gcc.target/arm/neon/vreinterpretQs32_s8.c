/* Test the `vreinterpretQs32_s8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretQs32_s8 (void)
{
  int32x4_t out_int32x4_t;
  int8x16_t arg0_int8x16_t;

  out_int32x4_t = vreinterpretq_s32_s8 (arg0_int8x16_t);
}

/* { dg-final { cleanup-saved-temps } } */
