#include <check.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"
#define eps 0.0000001

double n;

START_TEST(s21_absTEST) {
  ck_assert_int_eq(s21_abs(0), abs(0));
  ck_assert_int_eq(s21_abs(INT_MAX), abs(INT_MAX));
  ck_assert_int_eq(s21_abs(-1), abs(-1));
  ck_assert_int_eq(s21_abs(-0022), abs(-0022));
  ck_assert_int_eq(s21_abs(INT_MIN), abs(INT_MIN));
  ck_assert_int_eq(s21_abs(5), abs(5));
  ck_assert_int_eq(s21_abs(-0), abs(-0));
  ck_assert_int_eq(s21_abs(-0101010), abs(-0101010));
  ck_assert_int_eq(s21_abs(64386876), abs(64386876));
  ck_assert_int_eq(s21_abs(-1234), abs(-1234));
}
END_TEST

START_TEST(s21_acosTEST) {
  ck_assert_int_eq(s21_acos(42352), acos(42352));
  ck_assert_int_eq(s21_acos(-35363), acos(-35363));
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), eps);
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), eps);
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), eps);
  ck_assert_ldouble_eq_tol(s21_acos(0.666666), acos(0.666666), eps);
  ck_assert_ldouble_eq_tol(s21_acos(-0.333333), acos(-0.333333), eps);
  ck_assert_ldouble_eq_tol(s21_acos(0.999999), acos(0.999999), eps);
  ck_assert_ldouble_eq_tol(s21_acos(-0.888), acos(-0.888), eps);
  ck_assert_ldouble_eq_tol(s21_acos(DBL_MIN), acos(DBL_MIN), eps);
  ck_assert_ldouble_nan(s21_acos(NAN));
}
END_TEST

START_TEST(s21_asinTEST) {
  ck_assert_int_eq(s21_asin(42352), asin(42352));
  ck_assert_int_eq(s21_asin(-35363), asin(-35363));
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), eps);
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), eps);
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), eps);
  ck_assert_ldouble_eq_tol(s21_asin(0.666666), asin(0.666666), eps);
  ck_assert_ldouble_eq_tol(s21_asin(-0.333333), asin(-0.333333), eps);
  ck_assert_ldouble_eq_tol(s21_asin(0.999999), asin(0.999999), eps);
  ck_assert_ldouble_eq_tol(s21_asin(-0.888), asin(-0.888), eps);
  ck_assert_ldouble_eq_tol(s21_asin(DBL_MIN), asin(DBL_MIN), eps);
  ck_assert_ldouble_nan(s21_asin(NAN));
}
END_TEST

START_TEST(s21_atanTEST) {
  ck_assert_ldouble_eq_tol(s21_atan(42352), atan(42352), eps);
  ck_assert_ldouble_eq_tol(s21_atan(-35363), atan(-35363), eps);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), eps);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), eps);
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), eps);
  ck_assert_ldouble_eq_tol(s21_atan(0.666666), atan(0.666666), eps);
  ck_assert_ldouble_eq_tol(s21_atan(-0.333333), atan(-0.333333), eps);
  ck_assert_ldouble_eq_tol(s21_atan(57434.574554256), atan(57434.574554256),
                           eps);
  ck_assert_ldouble_eq_tol(s21_atan(DBL_MAX), atan(DBL_MAX), eps);
  ck_assert_ldouble_eq_tol(s21_atan(DBL_MIN), atan(DBL_MIN), eps);
  ck_assert_ldouble_nan(s21_atan(NAN));
}
END_TEST

START_TEST(s21_ceilTEST) {
  ck_assert_ldouble_eq(s21_ceil(0), ceil(0));
  ck_assert_ldouble_eq(s21_ceil(DBL_MIN), ceil(DBL_MIN));
  ck_assert_ldouble_eq(s21_ceil(-2432.3242), ceil(-2432.3242));
  ck_assert_ldouble_eq(s21_ceil(-DBL_MIN), ceil(-DBL_MIN));
  ck_assert_ldouble_eq(s21_ceil(10101010.10), ceil(10101010.10));
  ck_assert_ldouble_eq(s21_ceil(-99.999), ceil(-99.999));
  ck_assert_ldouble_eq(s21_ceil(8989787989.9789798), ceil(8989787989.9789798));
  ck_assert_ldouble_eq(s21_ceil(-56463.0), ceil(-56463.0));
  ck_assert_ldouble_eq(s21_ceil(00034554.00034554), ceil(00034554.00034554));
  ck_assert_ldouble_eq(s21_ceil(-0.00000001), ceil(-0.00000001));
  ck_assert_ldouble_nan(s21_ceil(NAN));
  ck_assert_ldouble_eq(s21_ceil(DBL_MAX), ceil(DBL_MAX));
  ck_assert_ldouble_eq(s21_ceil(-DBL_MAX), ceil(-DBL_MAX));
}
END_TEST

START_TEST(s21_cosTEST) {
  ck_assert_double_eq_tol(s21_cos(0), cos(0), eps);
  ck_assert_double_eq_tol(s21_cos(DBL_MIN), cos(DBL_MIN), eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 1 / 12), cos(S21_M_PI * 1 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 2 / 12), cos(S21_M_PI * 2 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 3 / 12), cos(S21_M_PI * 3 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 4 / 12), cos(S21_M_PI * 4 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 5 / 12), cos(S21_M_PI * 5 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 6 / 12), cos(S21_M_PI * 6 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 7 / 12), cos(S21_M_PI * 7 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 8 / 12), cos(S21_M_PI * 8 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 9 / 12), cos(S21_M_PI * 9 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 10 / 12), cos(S21_M_PI * 10 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 11 / 12), cos(S21_M_PI * 11 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 12 / 12), cos(S21_M_PI * 12 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 13 / 12), cos(S21_M_PI * 13 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 14 / 12), cos(S21_M_PI * 14 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 15 / 12), cos(S21_M_PI * 15 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 16 / 12), cos(S21_M_PI * 16 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 17 / 12), cos(S21_M_PI * 17 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 18 / 12), cos(S21_M_PI * 18 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 19 / 12), cos(S21_M_PI * 19 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 20 / 12), cos(S21_M_PI * 20 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 21 / 12), cos(S21_M_PI * 21 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 22 / 12), cos(S21_M_PI * 22 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 23 / 12), cos(S21_M_PI * 23 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 24 / 12), cos(S21_M_PI * 24 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 25 / 12), cos(S21_M_PI * 25 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 26 / 12), cos(S21_M_PI * 26 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 27 / 12), cos(S21_M_PI * 27 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 28 / 12), cos(S21_M_PI * 28 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 29 / 12), cos(S21_M_PI * 29 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 30 / 12), cos(S21_M_PI * 30 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 31 / 12), cos(S21_M_PI * 31 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 32 / 12), cos(S21_M_PI * 32 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 33 / 12), cos(S21_M_PI * 33 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(S21_M_PI * 34 / 12), cos(S21_M_PI * 34 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 1 / 12), cos(-S21_M_PI * 1 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 2 / 12), cos(-S21_M_PI * 2 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 3 / 12), cos(-S21_M_PI * 3 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 4 / 12), cos(-S21_M_PI * 4 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 5 / 12), cos(-S21_M_PI * 5 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 6 / 12), cos(-S21_M_PI * 6 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 7 / 12), cos(-S21_M_PI * 7 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 8 / 12), cos(-S21_M_PI * 8 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 9 / 12), cos(-S21_M_PI * 9 / 12),
                          eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 10 / 12),
                          cos(-S21_M_PI * 10 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 11 / 12),
                          cos(-S21_M_PI * 11 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 12 / 12),
                          cos(-S21_M_PI * 12 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 13 / 12),
                          cos(-S21_M_PI * 13 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 14 / 12),
                          cos(-S21_M_PI * 14 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 15 / 12),
                          cos(-S21_M_PI * 15 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 16 / 12),
                          cos(-S21_M_PI * 16 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 17 / 12),
                          cos(-S21_M_PI * 17 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 18 / 12),
                          cos(-S21_M_PI * 18 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 19 / 12),
                          cos(-S21_M_PI * 19 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 20 / 12),
                          cos(-S21_M_PI * 20 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 21 / 12),
                          cos(-S21_M_PI * 21 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 22 / 12),
                          cos(-S21_M_PI * 22 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 23 / 12),
                          cos(-S21_M_PI * 23 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 24 / 12),
                          cos(-S21_M_PI * 24 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 25 / 12),
                          cos(-S21_M_PI * 25 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 26 / 12),
                          cos(-S21_M_PI * 26 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 27 / 12),
                          cos(-S21_M_PI * 27 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 28 / 12),
                          cos(-S21_M_PI * 28 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 29 / 12),
                          cos(-S21_M_PI * 29 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 30 / 12),
                          cos(-S21_M_PI * 30 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 31 / 12),
                          cos(-S21_M_PI * 31 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 32 / 12),
                          cos(-S21_M_PI * 32 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 33 / 12),
                          cos(-S21_M_PI * 33 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI * 34 / 12),
                          cos(-S21_M_PI * 34 / 12), eps);
  ck_assert_double_eq_tol(s21_cos(432424.1242423), cos(432424.1242423), eps);
  ck_assert_double_eq_tol(s21_cos(-332432.4252), cos(-332432.4252), eps);
  ck_assert_double_nan(s21_cos(NAN));
}
END_TEST

START_TEST(s21_expTEST) {
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), eps);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), eps);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), eps);
  ck_assert_int_eq(s21_exp(999999999999), exp(999999999999));
  ck_assert_ldouble_eq_tol(s21_exp(-999999999999), exp(-999999999999), eps);
  ck_assert_int_eq(s21_exp(DBL_MAX), exp(DBL_MAX));
  ck_assert_ldouble_eq_tol(s21_exp(-DBL_MAX), exp(-DBL_MAX), eps);
  ck_assert_ldouble_eq_tol(s21_exp(1e-9), exp(1e-9), eps);
  ck_assert_ldouble_eq_tol(s21_exp(-1e-9), exp(-1e-9), eps);
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_int_eq(s21_exp(INFINITY), exp(INFINITY));
  ck_assert_ldouble_eq_tol(s21_exp(-INFINITY), exp(-INFINITY), eps);
}
END_TEST

START_TEST(s21_fabsTEST) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.4634985729), fabs(-0.4634985729), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(1000.10000), fabs(1000.1000), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(DBL_MIN), fabs(DBL_MIN), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(-DBL_MIN), fabs(-DBL_MIN), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(DBL_MAX), fabs(DBL_MAX), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(-DBL_MAX), fabs(-DBL_MAX), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(12345.12345), fabs(12345.12345), eps);
  ck_assert_ldouble_eq_tol(s21_fabs(-12345.12345), fabs(-12345.12345), eps);
  ck_assert_ldouble_nan(s21_fabs(NAN));
  ck_assert_ldouble_infinite(s21_fabs(INFINITY));
}
END_TEST

START_TEST(s21_floorTEST) {
  ck_assert_ldouble_eq(s21_floor(0), floor(0));
  ck_assert_ldouble_eq(s21_floor(DBL_MIN), floor(DBL_MIN));
  ck_assert_ldouble_eq(s21_floor(-2432.3242), floor(-2432.3242));
  ck_assert_ldouble_eq(s21_floor(-DBL_MIN), floor(-DBL_MIN));
  ck_assert_ldouble_eq(s21_floor(10101010.10), floor(10101010.10));
  ck_assert_ldouble_eq(s21_floor(-99.999), floor(-99.999));
  ck_assert_ldouble_eq(s21_floor(8989787989.9789798),
                       floor(8989787989.9789798));
  ck_assert_ldouble_eq(s21_floor(-56463.0), floor(-56463.0));
  ck_assert_ldouble_eq(s21_floor(00034554.00034554), floor(00034554.00034554));
  ck_assert_ldouble_eq(s21_floor(-0.00000001), floor(-0.00000001));
  ck_assert_ldouble_nan(s21_floor(NAN));
  ck_assert_ldouble_eq(s21_floor(DBL_MAX), floor(DBL_MAX));
  ck_assert_ldouble_eq(s21_floor(-DBL_MAX), floor(-DBL_MAX));
}
END_TEST

int main(void) {
  Suite* suite = suite_create("S21_KEK");
  SRunner* srunner = srunner_create(suite);

  TCase* s21_abs_p = tcase_create("s21_abs");
  suite_add_tcase(suite, s21_abs_p);
  tcase_add_test(s21_abs_p, s21_absTEST);

  TCase* s21_acos_p = tcase_create("s21_acos");
  suite_add_tcase(suite, s21_acos_p);
  tcase_add_test(s21_acos_p, s21_acosTEST);

  TCase* s21_asin_p = tcase_create("s21_asin");
  suite_add_tcase(suite, s21_asin_p);
  tcase_add_test(s21_asin_p, s21_asinTEST);

  TCase* s21_atan_p = tcase_create("s21_atan");
  suite_add_tcase(suite, s21_atan_p);
  tcase_add_test(s21_atan_p, s21_atanTEST);

  TCase* s21_ceil_p = tcase_create("s21_ceil");
  suite_add_tcase(suite, s21_ceil_p);
  tcase_add_test(s21_ceil_p, s21_ceilTEST);

  TCase* s21_cos_p = tcase_create("s21_cos");
  suite_add_tcase(suite, s21_cos_p);
  tcase_add_test(s21_cos_p, s21_cosTEST);

  TCase* s21_exp_p = tcase_create("s21_exp");
  suite_add_tcase(suite, s21_exp_p);
  tcase_add_test(s21_exp_p, s21_expTEST);

  TCase* s21_fabs_p = tcase_create("s21_fabs");
  suite_add_tcase(suite, s21_fabs_p);
  tcase_add_test(s21_fabs_p, s21_fabsTEST);

  TCase* s21_floor_p = tcase_create("s21_floor");
  suite_add_tcase(suite, s21_floor_p);
  tcase_add_test(s21_floor_p, s21_floorTEST);

  srunner_run_all(srunner, CK_VERBOSE);
  int number_failed = srunner_ntests_failed(srunner);
  srunner_free(srunner);
  return number_failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}