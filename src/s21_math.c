#include "s21_math.h"

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#define S21_M_PI        3.14159265358979323846264338327950288

// сможет быть неправильно, нужно уточнить:
#define MAC_LDOUBLE_MIN_ 0.0000000000000000000000000000000001L

int s21_abs(int x) {  // возможно наивная имплементация
  int returnValue = x;
  if (x < 0) {
    returnValue = x * -1;
  }
  return returnValue;
}

long double s21_ceil(double x) {
  long double returnValue = 0.0L;
  long long leftPartInt = x;              // getting the floor value
  long double leftPartLod = leftPartInt;  // Lod stands for long double
  long double rightPart = x - leftPartLod;

  // тут нужно поставить минимальный по размеру long double, может зависеть от
  // системы, тогда надо сделать вилку:
  if (rightPart > MAC_LDOUBLE_MIN_) {
    returnValue = (long double)leftPartInt + 1;
  } else {
    returnValue = x;
  }
  return returnValue;
}

long double s21_floor(double x) {
  long long leftPartInt = x;              // getting the floor value
  long double leftPartLod = leftPartInt;  // Lod stands for long double
  return leftPartLod;
}

long double s21_fabs(double x) {  // возможно наивная имплементация
  long double returnValue = x;
  if (x < 0) {
    returnValue = x * -1.0L;
  }
  return returnValue;
}

long double factorial_d(long double n) {
  if (n == 0.0 || n == 1.0) {
    return 1.0;
  } else {
    return n * factorial_d(n - 1);
  }
}

int minusone(int n) {
  int one = 0;
  if (n % 2 == 0) {
    one = 1;
  } else {
    one = -1;
  }
  return one;
}

long double s21_cos(double x) {
  long double result = 0;
  if (x >= S21_M_PI || x <= S21_M_PI) {
    x = fmod(x, (2 * S21_M_PI));
  }
  for (size_t i = 0; i < 15; i++) {
    result += minusone(i) * pow((double)x, 2 * i) / factorial_d(2 * i);
  }
  return result;
}

long double s21_sin(double x) {
  long double result = 0;
  if (x >= S21_M_PI || x <= S21_M_PI) {
    x = fmod(x, (2 * S21_M_PI));
  }
  for (size_t i = 0; i < 14; i++) {
    result += minusone(i) * pow((double)x, 2 * i + 1) / factorial_d(2 * i + 1);
  }
  return result;
}
  


  