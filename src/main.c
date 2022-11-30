#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define s21_PI 3.141593

int s21_abs(int x);
long double s21_asin(double x);

int main() {
    printf("%Lf", s21_asin(-2));
    return 0;
}

int s21_abs(int x) {
    int returnValue;
    if (x < 0) {
        returnValue = -1 * x;
    } else {
        returnValue = x;
    }
    return returnValue;
}

long double s21_asin(double x) {
    long double returnValue = 0;
    long double taylor = x;
    long long int four = 1;
    long double n, n1;
    if (x <= 0.8 && x >= -0.8) {
    double rememberX = x;
    long double taylor = x;
    for (int k = 1; k <= 27; k++) {
        n = 1;
        n1 = 1;
        returnValue = returnValue + taylor;
        x = x * rememberX * rememberX;
        for (int i = 1; i <= k; i++) {
            n = n * i;
        }
        for (int i = 1; i <= k; i++) {
            n1 = n1 * i;
        }
        n = n / n1;
        for (int i = k + 1; i <= 2 * k; i++) {
            n = n * i;
        }
        n = n / n1;
        four = 4 * four;
        taylor = (n * x)/(four * (2 * k + 1));
    }
    } else if (x <= 1 || x >= -1) {
        int sign = 1;
        if (x < 0) {
            sign = -1;
        }
        x = sqrt(1 - x * x);
        double rememberX = x;
        long double taylor = x;
        for (int k = 1; k <= 10; k++) {
        n = 1;
        n1 = 1;
        returnValue = returnValue + taylor;
        x = x * rememberX * rememberX;
        for (int i = 1; i <= 2 * k; i++) {
            n = n * i;
        }
        for (int i = 1; i <= k; i++) {
            n1 = n1 * i;
        }
        n = (n / n1) / n1; 
        four = 4 * four;
        taylor = (n * x)/(four * (2 * k + 1));
    }
    returnValue = sign * (s21_PI/2 - returnValue);
    } else {
        returnValue = NAN;
    }
   return returnValue;
}