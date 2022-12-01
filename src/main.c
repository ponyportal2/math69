#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define s21_PI 3.141592654
#define eps 0.0000001
#define EXP 2.7182818

int s21_abs(int x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);
long double fact(int n);
long double s21_pow(double base, double exp);
long double s21_exp(double x);
long double s21_log(double x);

int main() {
    printf("%Lf\n", s21_log(3));
    printf("%f\n", log(3));
 // printf("%f\n", atan(-2));
 // printf("%Lf\n", s21_atan(-2));
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

long double fact(int k) {
    long double n = 1;
    long double returnValue = 0;
    for (int i = 1; i <= k; i++) {
        n = n * i;
    }
    returnValue = n;
    return returnValue;
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
    for (int k = 1; k <= 27; k++) {
        n = 1;
        n1 = 1;
        returnValue = returnValue + taylor;
        x = x * rememberX * rememberX;
        n = fact(k);
        n1 = fact(k);
        n = n / n1;
        for (int i = k + 1; i <= 2 * k; i++) {
            n = n * i;
        }
        n = n / n1;
        four = 4 * four;
        taylor = (n * x)/(four * (2 * k + 1));
    }
    if (rememberMore) {
        returnValue = sign * (s21_PI/2 - returnValue);
    }
    }
   return returnValue;
}

long double s21_acos(double x) {
    return (s21_PI/2 - s21_asin(x));
}

long double s21_atan(double x) {
    int minusOne = 1;
    bool rememberMore = false;
    double sign = 1;
    if (x < 0) {
        sign = -1;

    }
    /*
    if (fabs(x) > 1) {
        x = 1/x;
        rememberMore = true;
    }
    long double returnValue = x;
    double rememberX = x;
    for (int k = 2; k <= 500000; k++) {
        minusOne = minusOne * (-1);
        x = x * rememberX * rememberX;
        returnValue = returnValue + minusOne * (x/(2 * k - 1));
    }
    if (rememberMore) {
        returnValue = (s21_PI/2 - sign * returnValue) * sign;
    }
    */
    return sign * acos(1/sqrt(1 + x * x));
}
/*
long double s21_pow(double base, double exp) {
    long double celoe = floor(fabs(exp));
    long double drob = fabs(exp) - celoe;
    long double znamenatel = 1;

    long double returnValue = 1.0;
    long double ValueDrob = 1.0;
    long double startX = 1;
    for (double i = 1; i <= celoe + eps; i++) {
        returnValue = returnValue * base;
    }
    if (drob > eps) {
        long double znamenatel = 1;
        while ((drob) - floor(drob) > eps && (drob) - floor(drob) < 1 - eps){
            drob = drob * 10;
            znamenatel = znamenatel * 10;
        }
        while (fmod(drob, 2) < eps && fmod(znamenatel, 2) < eps) {
            drob = drob / 2;
            znamenatel = znamenatel / 2;
        }
        while (fmod(drob, 5) < eps && fmod(znamenatel, 5) < eps) {
            drob = drob / 5;
            znamenatel = znamenatel / 5;
        }
        long double forBase = s21_exp(base * log(drob));
        long double startX;
        if (fabs(base) <= 1) {
            startX = 1;
        } else {
           startX = forBase/znamenatel;
        }
        long double oldX;
        bool end = false;
        while (!end) {
            oldX = startX;
            startX = 1/znamenatel * ((znamenatel - 1) * startX + forBase/s21_exp(startX * log(znamenatel - 1)));
            if (!(oldX - startX > eps)) {
                end = true;
            }
        }
        returnValue = returnValue * startX;
    }
    if (exp < 0) {
        returnValue = 1/returnValue;
    } 
    if (fabs(exp) < eps) {
        returnValue = 1;
    }
    return returnValue;
}
*/

long double s21_pow(double base, double e) {
    return s21_exp(s21_log(base) * e);
}


long double s21_exp(double x) {
    long double rememberX = x;
    long double returnValue = 1 + x;
    for (int k = 2; k <= 150; k++) {
        x = x * rememberX;
        returnValue = returnValue + x/fact(k);
    }
    return returnValue;
}


long double s21_log(double x) {
    if (x - 2 < eps) {
        x = x - 1;
    }
    long double rememberX = x;
    long double returnValue = x;
    int minusOne = 1;
    if (x - 1 < eps) {
    for (int k = 2; k <= 10000; k++) {
        x = x * rememberX;
        minusOne = minusOne * (-1);
        returnValue = returnValue + minusOne * x / k;
    } 
    } else {
        x = (x - 1)/(x + 1);
        returnValue = s21_log(1 + x) - s21_log(1 - x);
    }
    return returnValue;
}