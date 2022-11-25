#include <math.h>
#include <stdio.h>

#include "s21_math.h"

int main() {
  // printf("%d\n", sizeof(double));       // 8 on mac
  // printf("%d\n", sizeof(long double));  // 16 on mac

  // printf %Lf почему-то все равно выводит с не слишком большой точностью. надо
  // разобраться.

  printf("%Lf\n", s21_ceil(3.1415926535897932384626433832795028L));
  // maybe it's the limit of precision for generic double:
  printf("%Lf\n", s21_ceil(3.000000000000001L));

  printf("%Lf\n", s21_floor(3.1415926535897932384626433832795028L));
  printf("%Lf\n", s21_floor(3.000000000000001L));

  printf("%Lf\n", s21_fabs(-3.1415926535897932384626433832795028L));
  printf("%Lf\n", s21_fabs(-3.000000000000001L));

  printf("%f\n", fmod(3.14, 3.13));
  // printf("%Lf\n", fmod(-3.000000000000001L));

  printf("%Lf\n", s21_sqrt(3.0));
  // printf("%Lf\n", fmod(-3.000000000000001L));

  return 0;
}

// ------------------------------
// HOMYACHING:
// ------------------------------
// FMOD:
// ------------------------------
// long double s21_fmod(double x, double y) {
//   long double tempResult = 0.0L;
//   long double localX = x; // может нужно поменять на просто double
//   while
// localX = localX - y

//   }

// ------------------------------
// POW:
// ------------------------------

// может нужно умножить на целые числа раз. и в последнем умножении умножить на
// 0.остаток

// long double pow(double base, double exp) {
//   returnValue = 0.0L;
//   while
//   return returnValue;
// }
// ------------------------------
// SQRT
// ------------------------------
long double s21_sqrt(double x) {
  long double multiplier = x / 2;
  long double prevMultiplier = x;
  long double product = 0.0;
  bool isStarted = true;
  // тут может быть нужно добавить точность, чтобы было
  // не слишком точно (на самом деле и в других функциях тоже)
  // (но это не точно :) ;
  // так же скорее всего нужно отработать случай когда ответ ноль
  // и подобные краевые :
  while (product != x) {
    printf("Product:[%Lf]\n", product);
    sleep(1);
    if (product < x) {
      if (isStarted == false) {
        prevMultiplier = multiplier;
        multiplier = (multiplier + prevMultiplier) / 2;
      }
      prevMultiplier =  x + 
    } else {  // if product is >= x
      prevMultiplier = multiplier;
      multiplier = (multiplier + prevMultiplier) / 2;
    }

    isStarted = false;
    product = multiplier * multiplier;
    printf("Multiplier:[%Lf]\n\n", multiplier);
  }
  return multiplier;
}