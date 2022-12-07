#include "s21_math.h"

#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

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
  if (x >= 0) {
  if (rightPart >= DBL_MIN ) {
    returnValue = (long double)leftPartInt + 1;
  } else {
    returnValue = x;
  }
  } else if (x < 0) {
    returnValue = leftPartInt;
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
  if (x >= 2 * S21_M_PI || x <= -2 * S21_M_PI) {
    x = fmod(x, (2 * S21_M_PI));
  }
  for (size_t i = 0; i < 14; i++) {
    result += minusone(i) * pow((double)x, 2 * i + 1) / factorial_d(2 * i + 1);
  }
  return result;
}

long double s21_tan(double x) {
  return (s21_sin(x) / s21_cos(x));
}  // в точках близких к pi/2  погрешность большая((( хз че делать, пробывал еще
   // 2 способа приблежения рядами, но они хуже считают
long double s21_exp(double x) {
  long double add_value = 1;
  long double series = 1;
  long double i = 1;
  long double old = 0;
  while (fabs((double)add_value) > S21_EPS && series - old != 0) {
    add_value *= x / i;
    i++;
    old = series;
    series += add_value;
    if (series > DBL_MAX || series < -DBL_MAX) {
      if (x > 0) {
      series = S21_INF;
      break;
      } else if (x < 0) {
        series = 0;
      }
    } 
  }
  return series;
}

long double s21_asin(double x) {
  long double returnValue = 0;
  bool rememberMore = false;
  long long int four = 1;
  long double n, n1;
  double sign = 1;
  if (x < 0) {
    sign = -1;
  }
  if (fabs(x) > 0.8 && fabs(x) <= 1) {
    x = sqrt(1 - x * x);
    rememberMore = true;
  } else if (fabs(x) > 1) {
    returnValue = NAN;
  }
  if (returnValue != NAN) {
    double rememberX = x;
    long double taylor = x;
    for (int k = 1; k <= 29; k++) {
      n = 1;
      n1 = 1;
      returnValue = returnValue + taylor;
      x = x * rememberX * rememberX;
      n = factorial_d(k);
      n1 = factorial_d(k);
      n = n / n1;
      for (int i = k + 1; i <= 2 * k; i++) {
        n = n * i;
      }
      n = n / n1;
      four = 4 * four;
      taylor = (n * x) / (four * (2 * k + 1));
    }
    if (rememberMore) {
      returnValue = sign * (S21_M_PI / 2 - returnValue);
    }
  }
  return returnValue;
}

long double s21_acos(double x) { return (S21_M_PI / 2 - s21_asin(x)); }

long double s21_atan(double x) {
  double sign = 1;
  if (x < 0) {
    sign = -1;
  }
  return sign * acos(1 / sqrt(1 + x * x));
}