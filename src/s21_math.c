#include "s21_math.h"

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