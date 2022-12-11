#include "s21_math.h"

#include <float.h>
#include <math.h>  // надо починить чтобы INFINITY и подобное работало без math.h
// вроде нам нужно сделать s21_INIFINITY? уже не помню задание
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int s21_abs(int x) {  // возможно наивная имплементация
  int returnValue = x;
  if (x < 0) {
    returnValue = x * -1;
  }
  return returnValue;
}

long double s21_ceil(double x) {
  long double returnValue = x;
  long long leftPartInt = x;              // getting the floor value
  long double leftPartLod = leftPartInt;  // Lod stands for long double
  long double rightPart = x - leftPartLod;

  if (x >= 0 && x != DBL_MAX && x != INFINITY) {
    if (rightPart >= DBL_MIN) {
      returnValue = (long double)leftPartInt + 1;
    } else {
      returnValue = x;
    }
  } else if (x < 0 && x != -DBL_MAX && x != -INFINITY) {
    returnValue = leftPartInt;
  }
  return returnValue;
}

// может куча кастов в лонг дабл это тупо, проверь меняет это что-то или нет :)
long double s21_floor(double x) {
  long double returnValue = (long double)x;
  long long leftPartInt = x;  // getting the floor value
  long double leftPartLod =
      (long double)leftPartInt;  // Lod stands for long double
  long double rightPart = (long double)x - leftPartLod;

  if (x < 0 && x != -DBL_MAX && x != -INFINITY) {
    if (rightPart >= DBL_MIN || rightPart <= -DBL_MIN) {
      returnValue = (long double)leftPartInt - 1;
    } else {
      returnValue = (long double)x;
    }
  } else if (x > 0 && x != DBL_MAX && x != INFINITY) {
    returnValue = (long double)leftPartInt;
  }
  return (long double)returnValue;
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

long double s21_log(double x) {
  long double returnValue = eps;
  long double rememberX;
  long double counterStepen = 0;
  long double counterMinusStepen = 0;
  //  if (x - 2. < eps && x - 2. > -eps) {
  //     returnValue = 0.693147180559945286226763982995;
  // } else {
  if (x < 0) {
    returnValue = S21_NAN;
  } else if (x == 0) {  // вот тут получается надо именно 0
    returnValue = -INFINITY;
  }
  if (returnValue == eps) {
    while ((int)x < 0.1) {
      counterMinusStepen++;
      x = x * 10;
    }
    while ((int)x > eps) {
      counterStepen++;
      x = x / 10;
    }
    x = x - 1;
    rememberX = x;
    returnValue = x;
    int minusOne = 1;
    //  if (x - 1 < eps) {
    for (int k = 2; k <= 1000;
         k++) {  // чем большее число в логарифм? тем больше шагов надо тут
      x = x * rememberX;
      minusOne = minusOne * (-1);
      returnValue = returnValue + minusOne * x / k;
    }
    //   } else {
    //      x = (x - 1)/(x + 1);
    //      returnValue = s21_log(1 + x) - s21_log(1 - x);
    //   }
  }
  //   }
  return returnValue + counterStepen * lnTEN - counterMinusStepen * lnTEN;
}

long double s21_fmod(double x, double y) {
  double divisor = x / y;
  int round_divisor = (int)s21_fabs(divisor);

  long double res = divisor < 0 ? x + y * round_divisor : x - y * round_divisor;

  return res;
}

long double s21_pow(double base, double e) {
  return s21_exp(s21_log(base) * e);
}

long double s21_sqrt(double x) {
  long double startX;

  startX = x / 2;
  // long double oldX;
  // bool end = false;
  for (int i = 1; i < 1000; i++) {
    startX = 1. / 2 * (startX + x / startX);
  }
  /*
  if (startX < 0) {
      startX = NAN;
  } else if (x < eps) {
      startX = 0;
  } else {
      startX = s21_pow(x, 1./2);
  }
  */
  return startX;
}
