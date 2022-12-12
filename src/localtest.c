#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

int main() {
  // ABS
  // ---
  printf("s21:[%19i],c:[%19i]\n", s21_abs(0), abs(0));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(INT_MAX), abs(INT_MAX));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(-1), abs(-1));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(-0022), abs(-0022));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(INT_MIN), abs(INT_MIN));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(5), abs(5));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(-0), abs(-0));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(-0101010), abs(-0101010));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(64386876), abs(64386876));
  printf("s21:[%19i],c:[%19i]\n", s21_abs(-1234), abs(-1234));

  // ACOS:
  // -----
  printf("s21:[%19Lf],c:[%19lf]", s21_acos(42352), acos(42352));
  printf("s21:[%19Lf],c:[%19lf]", s21_acos(-35363), acos(-35363));
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(0), acos(0), eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(-1), acos(-1), eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(1), acos(1), eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(0.666666),
         acos(0.666666), eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(-0.333333),
         acos(-0.333333), eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(0.999999),
         acos(0.999999), eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(-0.888), acos(-0.888),
         eps);
  printf("s21:[%19Lf],c:[%19lf],eps:[%lf]\n", s21_acos(DBL_MIN), acos(DBL_MIN),
         eps);
  printf("s21:[%19Lf]\n", s21_acos(NAN));
  printf("s21:[%19Lf]\n", s21_acos(DBL_MAX));
  printf("s21:[%19Lf]\n", s21_acos(INFINITY));
  printf("s21:[%19Lf]\n", s21_acos(-INFINITY));

  // CEIL:
  // -----
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(0), ceil(0));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(DBL_MIN), ceil(DBL_MIN));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-2432.3242), ceil(-2432.3242));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-DBL_MIN), ceil(-DBL_MIN));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(10101010.10), ceil(10101010.10));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-99.999), ceil(-99.999));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(8989787989.9789798),
         ceil(8989787989.9789798));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-56463.0), ceil(-56463.0));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(00034554.00034554),
         ceil(00034554.00034554));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-0.00000001), ceil(-0.00000001));
  printf("s21:[%19Lf]\n", s21_ceil(NAN));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(DBL_MAX), ceil(DBL_MAX));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-DBL_MAX), ceil(-DBL_MAX));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(INFINITY), ceil(INFINITY));
  printf("s21:[%19Lf],c:[%19lf]\n", s21_ceil(-INFINITY), ceil(-INFINITY));

  // СOS:
  // -----
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(0), cos(0), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(DBL_MIN), cos(DBL_MIN),
         eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 1 / 12),
         cos(S21_M_PI * 1 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 2 / 12),
         cos(S21_M_PI * 2 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 3 / 12),
         cos(S21_M_PI * 3 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 4 / 12),
         cos(S21_M_PI * 4 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 5 / 12),
         cos(S21_M_PI * 5 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 6 / 12),
         cos(S21_M_PI * 6 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 7 / 12),
         cos(S21_M_PI * 7 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 8 / 12),
         cos(S21_M_PI * 8 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 9 / 12),
         cos(S21_M_PI * 9 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 10 / 12),
         cos(S21_M_PI * 10 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 11 / 12),
         cos(S21_M_PI * 11 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 12 / 12),
         cos(S21_M_PI * 12 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 13 / 12),
         cos(S21_M_PI * 13 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 14 / 12),
         cos(S21_M_PI * 14 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 15 / 12),
         cos(S21_M_PI * 15 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 16 / 12),
         cos(S21_M_PI * 16 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 17 / 12),
         cos(S21_M_PI * 17 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 18 / 12),
         cos(S21_M_PI * 18 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 19 / 12),
         cos(S21_M_PI * 19 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 20 / 12),
         cos(S21_M_PI * 20 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 21 / 12),
         cos(S21_M_PI * 21 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 22 / 12),
         cos(S21_M_PI * 22 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 23 / 12),
         cos(S21_M_PI * 23 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 24 / 12),
         cos(S21_M_PI * 24 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 25 / 12),
         cos(S21_M_PI * 25 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 26 / 12),
         cos(S21_M_PI * 26 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 27 / 12),
         cos(S21_M_PI * 27 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 28 / 12),
         cos(S21_M_PI * 28 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 29 / 12),
         cos(S21_M_PI * 29 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 30 / 12),
         cos(S21_M_PI * 30 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 31 / 12),
         cos(S21_M_PI * 31 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 32 / 12),
         cos(S21_M_PI * 32 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 33 / 12),
         cos(S21_M_PI * 33 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(S21_M_PI * 34 / 12),
         cos(S21_M_PI * 34 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 1 / 12),
         cos(-S21_M_PI * 1 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 2 / 12),
         cos(-S21_M_PI * 2 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 3 / 12),
         cos(-S21_M_PI * 3 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 4 / 12),
         cos(-S21_M_PI * 4 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 5 / 12),
         cos(-S21_M_PI * 5 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 6 / 12),
         cos(-S21_M_PI * 6 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 7 / 12),
         cos(-S21_M_PI * 7 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 8 / 12),
         cos(-S21_M_PI * 8 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 9 / 12),
         cos(-S21_M_PI * 9 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 10 / 12),
         cos(-S21_M_PI * 10 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 11 / 12),
         cos(-S21_M_PI * 11 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 12 / 12),
         cos(-S21_M_PI * 12 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 13 / 12),
         cos(-S21_M_PI * 13 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 14 / 12),
         cos(-S21_M_PI * 14 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 15 / 12),
         cos(-S21_M_PI * 15 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 16 / 12),
         cos(-S21_M_PI * 16 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 17 / 12),
         cos(-S21_M_PI * 17 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 18 / 12),
         cos(-S21_M_PI * 18 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 19 / 12),
         cos(-S21_M_PI * 19 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 20 / 12),
         cos(-S21_M_PI * 20 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 21 / 12),
         cos(-S21_M_PI * 21 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 22 / 12),
         cos(-S21_M_PI * 22 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 23 / 12),
         cos(-S21_M_PI * 23 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 24 / 12),
         cos(-S21_M_PI * 24 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 25 / 12),
         cos(-S21_M_PI * 25 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 26 / 12),
         cos(-S21_M_PI * 26 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 27 / 12),
         cos(-S21_M_PI * 27 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 28 / 12),
         cos(-S21_M_PI * 28 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 29 / 12),
         cos(-S21_M_PI * 29 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 30 / 12),
         cos(-S21_M_PI * 30 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 31 / 12),
         cos(-S21_M_PI * 31 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 32 / 12),
         cos(-S21_M_PI * 32 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 33 / 12),
         cos(-S21_M_PI * 33 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-S21_M_PI * 34 / 12),
         cos(-S21_M_PI * 34 / 12), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(432424.1242423),
         cos(432424.1242423), eps);
  printf("s21[%19Lf],c:[%19lf],eps:[%lf]\n", s21_cos(-332432.4252),
         cos(-332432.4252), eps);
  printf("s21[%19Lf]\n", s21_cos(NAN));
  printf("s21[%19Lf]\n", s21_cos(INFINITY));
  printf("s21[%19Lf]\n", s21_cos(-INFINITY));
  printf("c[%19lf]\n", cos(NAN));
  printf("c[%19lf]\n", cos(INFINITY));
  printf("c[%19lf]\n", cos(-INFINITY));

  // EXP:
  // ----
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(1), exp(1), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(-1), exp(-1), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(0), exp(0), eps);
  printf("s21:[%Lf],c:[%lf]\n", s21_exp(999999999999), exp(999999999999));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(-999999999999),
         exp(-999999999999), eps);
  printf("s21:[%Lf],c:[%lf]\n", s21_exp(DBL_MAX), exp(DBL_MAX));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(-DBL_MAX), exp(-DBL_MAX),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(1e-9), exp(1e-9), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(-1e-9), exp(-1e-9), eps);
  printf("s21:[%Lf]\n", s21_exp(NAN));
  printf("s21:[%Lf],c:[%lf]\n", s21_exp(INFINITY), exp(INFINITY));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(-INFINITY), exp(-INFINITY),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(DBL_MIN), exp(DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(DBL_MIN), exp(DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_exp(-DBL_MIN), exp(-DBL_MIN),
         eps);

  // EXP:
  // ----
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(-0.4634985729),
         fabs(-0.4634985729), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(1000.10000), fabs(1000.1000),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(DBL_MIN), fabs(DBL_MIN),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(-DBL_MIN), fabs(-DBL_MIN),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(DBL_MAX), fabs(DBL_MAX),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(-DBL_MAX), fabs(-DBL_MAX),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(12345.12345),
         fabs(12345.12345), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fabs(-12345.12345),
         fabs(-12345.12345), eps);
  printf("s21:[%Lf]\n", s21_fabs(NAN));
  printf("s21:[%Lf]\n", s21_fabs(INFINITY));

  // FLOOR:
  // -----
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(0), floor(0));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(DBL_MIN), floor(DBL_MIN));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-2432.3242), floor(-2432.3242));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-DBL_MIN), floor(-DBL_MIN));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(10101010.10), floor(10101010.10));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-99.999), floor(-99.999));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(8989787989.9789798),
         floor(8989787989.9789798));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-56463.0), floor(-56463.0));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(00034554.00034554),
         floor(00034554.00034554));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-0.00000001), floor(-0.00000001));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(9999), floor(9999));
  printf("s21:[%Lf]\n", s21_floor(NAN));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(DBL_MAX), floor(DBL_MAX));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-DBL_MAX), floor(-DBL_MAX));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(INFINITY), floor(INFINITY));
  printf("s21:[%Lf],c:[%lf]\n", s21_floor(-INFINITY), floor(-INFINITY));

  // LOG:
  // ----
  printf("s21:[%Lf],c:[%lf]\n", s21_log(0), log(0));
  printf("s21:[%Lf]\n", s21_log(-5));
  printf("s21:[%Lf]\n", s21_log(-DBL_MIN));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_log(DBL_MIN), log(DBL_MIN), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_log(DBL_MAX), log(DBL_MAX),
  // eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_log(1), log(1), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_log(EXP), log(EXP), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_log(0.66666), log(0.66666), eps);
  // ck_assert_ldouble_nan(s21_log(NAN));
  printf("s21:[%Lf]\n", s21_log(-INFINITY));
  // ck_assert_ldouble_infinite(s21_log(INFINITY));
  printf("s21:[%Lf]\n", s21_log(-DBL_MAX));

  // FMOD:
  // -----
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(0, DBL_MAX),
         fmod(0, DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(0, -DBL_MAX),
         fmod(0, -DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(0, -DBL_MIN),
         fmod(0, -DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(0, DBL_MIN),
         fmod(0, DBL_MIN), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(DBL_MAX, -DBL_MIN),
  // fmod(DBL_MAX, -DBL_MIN), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(DBL_MAX, DBL_MIN),
  // fmod(DBL_MAX, DBL_MIN), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(-DBL_MAX, -DBL_MIN),
  // fmod(-DBL_MAX, -DBL_MIN), eps);
  //  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(-DBL_MAX, DBL_MIN),
  //  fmod(-DBL_MAX, DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(DBL_MAX, -DBL_MAX),
         fmod(DBL_MAX, -DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(DBL_MAX, DBL_MAX),
         fmod(DBL_MAX, DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(DBL_MIN, -DBL_MAX),
         fmod(DBL_MIN, -DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(DBL_MIN, DBL_MAX),
         fmod(DBL_MIN, DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(-DBL_MIN, -DBL_MAX),
         fmod(DBL_MIN, -DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(-DBL_MIN, DBL_MAX),
         fmod(DBL_MIN, DBL_MAX), eps);

  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(0, INFINITY), fmod(0,
  // INFINITY), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(0,
  // -INFINITY), fmod(0, -INFINITY), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(INFINITY, -DBL_MIN),
  //                          fmod(INFINITY, -DBL_MIN), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(INFINITY, 0),
  // fmod(INFINITY, 0), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(0,
  // 0), fmod(0, 0), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(10, 3), fmod(10, 3), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(10, 0), fmod(10, 0), eps);
  printf("s21:[%Lf]\n", s21_fmod(DBL_MAX, NAN));
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_fmod(3.3333, 0.0001),
  // fmod(3.3333, 0.0001), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(454242, -282322),
         fmod(454242, -282322), eps);
  printf("s21:[%Lf]\n", s21_fmod(NAN, NAN));
  printf("s21:[%Lf]\n", s21_fmod(NAN, INFINITY));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_fmod(-0.654987, -4),
         fmod(-0.654987, -4), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",
         s21_fmod(200000000000000000000.1, 10000000000000000),
         fmod(200000000000000000000.1, 10000000000000000), eps);

  // POW:
  // ----
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(1, 1), pow(1, 1), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(0.000, 1), pow(0.000, 1),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(1, 0.000), pow(1, 0.000),
         eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(0.000, 0.000), pow(0.000,
  // 0.000), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(0, 24), pow(0, 24), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(0, 35), pow(0, 35), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(-0, 24), pow(-0, 24), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(-0, 35), pow(-0, 35), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(+0, 24), pow(+0, 24), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(+0, 35), pow(+0, 35), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(0, 24), pow(0, 24), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-1, INFINITY), pow(-1,
  // INFINITY), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(1, NAN),
  // pow(1, NAN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(1, DBL_MIN), pow(1, DBL_MIN),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(3213.321, 0),
         pow(3213.321, 0), eps);
  printf("s21:[%Lf]\n", s21_pow(-333, 32.2));
  printf("s21:[%Lf]\n", s21_pow(0.999, -INFINITY));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(87.1, -INFINITY),
         pow(87.1, -INFINITY), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(0.999, INFINITY),
         pow(0.999, INFINITY), eps);
  printf("s21:[%Lf]\n", s21_pow(14.88, INFINITY));
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-INFINITY, -43),
  // pow(-INFINITY, -43), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-INFINITY, -43.23),
  // pow(-INFINITY, -43.23),
  //                          eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-INFINITY, -76),
  // pow(-INFINITY, -76), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-INFINITY, 45),
  // pow(-INFINITY, 45), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-INFINITY, 24),
  // pow(-INFINITY, 24), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-INFINITY, 36.1321),
  // pow(-INFINITY, 36.1321),
  //                          eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, 24), pow(INFINITY,
  // 24), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, 35),
  // pow(INFINITY, 35), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, 35.14252),
  // pow(INFINITY, 35.14252), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, -35),
  // pow(INFINITY, -35), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, -35.666),
  // pow(INFINITY, -35.666), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(NAN, NAN), pow(NAN, NAN),
  // eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(DBL_MAX, DBL_MIN),
  // pow(DBL_MAX, DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(5253.42, -658),
         pow(5253.42, -658), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(1, INFINITY), pow(1,
  // INFINITY), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(1,
  // -INFINITY), pow(1, -INFINITY), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, 1), pow(INFINITY,
  // 1), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, -1),
  // pow(INFINITY, -1), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(INFINITY, 0), pow(INFINITY,
  // 0), eps); printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(-1, -INFINITY),
  // pow(-1, -INFINITY), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(56.346786, 2.5346),
         pow(56.346786, 2.5346), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(DBL_MAX, DBL_MAX),
  // pow(DBL_MAX, DBL_MAX), eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_pow(DBL_MAX, -DBL_MAX),
  // pow(DBL_MAX, -DBL_MAX), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_pow(DBL_MIN, -DBL_MIN),
         pow(DBL_MIN, -DBL_MIN), eps);

  // SIN:
  // ----
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(0), sin(0), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(DBL_MIN), sin(DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 1 / 12),
         sin(S21_M_PI * 1 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 2 / 12),
         sin(S21_M_PI * 2 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 3 / 12),
         sin(S21_M_PI * 3 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 4 / 12),
         sin(S21_M_PI * 4 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 5 / 12),
         sin(S21_M_PI * 5 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 6 / 12),
         sin(S21_M_PI * 6 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 7 / 12),
         sin(S21_M_PI * 7 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 8 / 12),
         sin(S21_M_PI * 8 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 9 / 12),
         sin(S21_M_PI * 9 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 10 / 12),
         sin(S21_M_PI * 10 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 11 / 12),
         sin(S21_M_PI * 11 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 12 / 12),
         sin(S21_M_PI * 12 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 13 / 12),
         sin(S21_M_PI * 13 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 14 / 12),
         sin(S21_M_PI * 14 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 15 / 12),
         sin(S21_M_PI * 15 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 16 / 12),
         sin(S21_M_PI * 16 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 17 / 12),
         sin(S21_M_PI * 17 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 18 / 12),
         sin(S21_M_PI * 18 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 19 / 12),
         sin(S21_M_PI * 19 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 20 / 12),
         sin(S21_M_PI * 20 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 21 / 12),
         sin(S21_M_PI * 21 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 22 / 12),
         sin(S21_M_PI * 22 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 23 / 12),
         sin(S21_M_PI * 23 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 24 / 12),
         sin(S21_M_PI * 24 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 25 / 12),
         sin(S21_M_PI * 25 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 26 / 12),
         sin(S21_M_PI * 26 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 27 / 12),
         sin(S21_M_PI * 27 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 28 / 12),
         sin(S21_M_PI * 28 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 29 / 12),
         sin(S21_M_PI * 29 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 30 / 12),
         sin(S21_M_PI * 30 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 31 / 12),
         sin(S21_M_PI * 31 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 32 / 12),
         sin(S21_M_PI * 32 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 33 / 12),
         sin(S21_M_PI * 33 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(S21_M_PI * 34 / 12),
         sin(S21_M_PI * 34 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 1 / 12),
         sin(-S21_M_PI * 1 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 2 / 12),
         sin(-S21_M_PI * 2 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 3 / 12),
         sin(-S21_M_PI * 3 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 4 / 12),
         sin(-S21_M_PI * 4 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 5 / 12),
         sin(-S21_M_PI * 5 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 6 / 12),
         sin(-S21_M_PI * 6 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 7 / 12),
         sin(-S21_M_PI * 7 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 8 / 12),
         sin(-S21_M_PI * 8 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 9 / 12),
         sin(-S21_M_PI * 9 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 10 / 12),
         sin(-S21_M_PI * 10 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 11 / 12),
         sin(-S21_M_PI * 11 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 12 / 12),
         sin(-S21_M_PI * 12 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 13 / 12),
         sin(-S21_M_PI * 13 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 14 / 12),
         sin(-S21_M_PI * 14 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 15 / 12),
         sin(-S21_M_PI * 15 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 16 / 12),
         sin(-S21_M_PI * 16 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 17 / 12),
         sin(-S21_M_PI * 17 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 18 / 12),
         sin(-S21_M_PI * 18 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 19 / 12),
         sin(-S21_M_PI * 19 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 20 / 12),
         sin(-S21_M_PI * 20 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 21 / 12),
         sin(-S21_M_PI * 21 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 22 / 12),
         sin(-S21_M_PI * 22 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 23 / 12),
         sin(-S21_M_PI * 23 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 24 / 12),
         sin(-S21_M_PI * 24 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 25 / 12),
         sin(-S21_M_PI * 25 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 26 / 12),
         sin(-S21_M_PI * 26 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 27 / 12),
         sin(-S21_M_PI * 27 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 28 / 12),
         sin(-S21_M_PI * 28 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 29 / 12),
         sin(-S21_M_PI * 29 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 30 / 12),
         sin(-S21_M_PI * 30 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 31 / 12),
         sin(-S21_M_PI * 31 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 32 / 12),
         sin(-S21_M_PI * 32 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 33 / 12),
         sin(-S21_M_PI * 33 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-S21_M_PI * 34 / 12),
         sin(-S21_M_PI * 34 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(432424.1242423),
         sin(432424.1242423), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sin(-332432.4252),
         sin(-332432.4252), eps);
  printf("s21:[%Lf]\n", s21_sin(NAN));
  printf("s21:[%Lf]\n", s21_sin(INFINITY));
  printf("s21:[%Lf]\n", s21_sin(-INFINITY));

  // TAN:
  // ----
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(0), tan(0), eps);
  printf("s21:[%Lf]\n", s21_tan(INFINITY));
  printf("s21:[%Lf]\n", s21_tan(-INFINITY));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(0), tan(0), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(DBL_MIN), tan(DBL_MIN), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 1 / 12),
         tan(S21_M_PI * 1 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 2 / 12),
         tan(S21_M_PI * 2 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 3 / 12),
         tan(S21_M_PI * 3 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 4 / 12),
         tan(S21_M_PI * 4 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 5 / 12),
         tan(S21_M_PI * 5 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 7 / 12),
         tan(S21_M_PI * 7 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 8 / 12),
         tan(S21_M_PI * 8 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 9 / 12),
         tan(S21_M_PI * 9 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 10 / 12),
         tan(S21_M_PI * 10 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 11 / 12),
         tan(S21_M_PI * 11 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 12 / 12),
         tan(S21_M_PI * 12 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 13 / 12),
         tan(S21_M_PI * 13 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 14 / 12),
         tan(S21_M_PI * 14 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 15 / 12),
         tan(S21_M_PI * 15 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 16 / 12),
         tan(S21_M_PI * 16 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 17 / 12),
         tan(S21_M_PI * 17 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 19 / 12),
         tan(S21_M_PI * 19 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 20 / 12),
         tan(S21_M_PI * 20 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 21 / 12),
         tan(S21_M_PI * 21 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 22 / 12),
         tan(S21_M_PI * 22 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 23 / 12),
         tan(S21_M_PI * 23 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 24 / 12),
         tan(S21_M_PI * 24 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 25 / 12),
         tan(S21_M_PI * 25 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 26 / 12),
         tan(S21_M_PI * 26 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 27 / 12),
         tan(S21_M_PI * 27 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 28 / 12),
         tan(S21_M_PI * 28 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 29 / 12),
         tan(S21_M_PI * 29 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 31 / 12),
         tan(S21_M_PI * 31 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 32 / 12),
         tan(S21_M_PI * 32 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 33 / 12),
         tan(S21_M_PI * 33 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(S21_M_PI * 34 / 12),
         tan(S21_M_PI * 34 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 1 / 12),
         tan(-S21_M_PI * 1 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 2 / 12),
         tan(-S21_M_PI * 2 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 3 / 12),
         tan(-S21_M_PI * 3 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 4 / 12),
         tan(-S21_M_PI * 4 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 5 / 12),
         tan(-S21_M_PI * 5 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 7 / 12),
         tan(-S21_M_PI * 7 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 8 / 12),
         tan(-S21_M_PI * 8 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 9 / 12),
         tan(-S21_M_PI * 9 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 10 / 12),
         tan(-S21_M_PI * 10 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 11 / 12),
         tan(-S21_M_PI * 11 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 12 / 12),
         tan(-S21_M_PI * 12 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 13 / 12),
         tan(-S21_M_PI * 13 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 14 / 12),
         tan(-S21_M_PI * 14 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 15 / 12),
         tan(-S21_M_PI * 15 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 16 / 12),
         tan(-S21_M_PI * 16 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 17 / 12),
         tan(-S21_M_PI * 17 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 19 / 12),
         tan(-S21_M_PI * 19 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 20 / 12),
         tan(-S21_M_PI * 20 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 21 / 12),
         tan(-S21_M_PI * 21 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 22 / 12),
         tan(-S21_M_PI * 22 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 23 / 12),
         tan(-S21_M_PI * 23 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 24 / 12),
         tan(-S21_M_PI * 24 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 25 / 12),
         tan(-S21_M_PI * 25 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 26 / 12),
         tan(-S21_M_PI * 26 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 27 / 12),
         tan(-S21_M_PI * 27 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 28 / 12),
         tan(-S21_M_PI * 28 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 29 / 12),
         tan(-S21_M_PI * 29 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 31 / 12),
         tan(-S21_M_PI * 31 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 32 / 12),
         tan(-S21_M_PI * 32 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 33 / 12),
         tan(-S21_M_PI * 33 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-S21_M_PI * 34 / 12),
         tan(-S21_M_PI * 34 / 12), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(432424.1242423),
         tan(432424.1242423), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_tan(-332432.4252),
         tan(-332432.4252), eps);
  printf("s21:[%Lf]\n", s21_tan(NAN));

  // SQRT:
  // -----
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_sqrt(-2));
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_sqrt(0), sqrt(0), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(DBL_MIN), sqrt(DBL_MIN),
         eps);
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_sqrt(-0), sqrt(-0), eps);
  printf("s21:[%Lf]\n", s21_sqrt(-INFINITY));
  // printf("s21:[%Lf],c:[%lf],eps:[%lf]\n",s21_sqrt(INFINITY));
  printf("s21:[%Lf]\n", s21_sqrt(NAN));
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(35), sqrt(35), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(1), sqrt(1), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(123456), sqrt(123456), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(123456789), sqrt(123456789),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(S21_M_PI), sqrt(S21_M_PI),
         eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(126.8647465),
         sqrt(126.8647465), eps);
  printf("s21:[%Lf],c:[%lf],eps:[%lf]\n", s21_sqrt(75846.8647465),
         sqrt(75846.8647465), eps);

  return 0;
}