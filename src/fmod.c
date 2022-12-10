#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

#include "s21_math.h"

double s21_fmod(double x, double y);

int main() {
  printf("s21_fmod: %lf, fmod: %lf\n", s21_fmod(21.0, 5.0), fmod(21.0, 5.0));
  printf("s21_fmod: %lf, fmod: %lf\n", s21_fmod(-21.0, 5.0), fmod(-21.0, 5.0));
  printf("s21_fmod: %lf, fmod: %lf\n", s21_fmod(21.0, -5.0), fmod(21.0, -5.0));
  printf("s21_fmod: %lf, fmod: %lf\n", s21_fmod(-21.0, -5.0),
         fmod(-21.0, -5.0));
  return 0;
}

double s21_fmod(double x, double y) {
  double divisor = x / y;
  int round_divisor = (int)s21_fabs(divisor);

  double res = divisor < 0 ? x + y * round_divisor : x - y * round_divisor;

  return res;
}
