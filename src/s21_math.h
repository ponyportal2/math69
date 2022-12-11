#ifndef S21_MATH_H
#define S21_MATH_H
#define S21_M_PI 3.14159265358979323846264338327950288
#define S21_INF (1.0 / 0.0)
#define S21_NAN __builtin_nanf("0x7fc00000")
#define S21_EPS 1e-9
#define eps 0.0000001
#define EXP 2.7182818284590452353602874713527
#define lnTEN 2.3025850929940459010936137929093092679977
int s21_abs(int x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_fabs(double x);
long double factorial_d(long double n);
int minusone(int n);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);
long double s21_exp(double x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_log(double x);
long double s21_fmod(double x, double y);
long double s21_pow(double base, double e);
long double s21_sqrt(double x);
#endif