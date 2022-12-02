#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define s21_PI 3.14159265358979323846264338327950288
#define eps 0.0000001
#define EXP 2.7182818284590452353602874713527
#define lnTEN 2.3025850929940459010936137929093092679977

int s21_abs(int x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);
long double s21_atan1(double x);
long double fact(int n);
long double s21_pow(double base, double exp);
long double s21_exp(double x);
long double s21_log(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);



int main() {
    long double rez = 0;
    long double res = 0;
    double count = 0;
    for (double i = 0; i <= 1; i += 0.000001) {
        res = fabsl(s21_log(i) - log(i));
        if (res > rez) {
            rez = res;
            count = i;
        }
    }
    printf("%lf %.40Lf\n", count, rez);
    printf("%.30Lf\n", s21_log(0.000001));
   // printf("%.30Lf\n", s21_atan1(-6.9)); //вроде как хуже
    printf("%.40f\n", log(0.000001));
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
    for (int k = 1; k <= 29; k++) {
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

long double s21_atan1(double x) {
    int minusOne = 1;
    bool rememberMore = false;
    double sign = 1;
    double startX = x;
    if (x < 0) {
        sign = -1;
    }
    double rememberX = x;
    if (fabs(x) > 1) {
        x = 1/x;
        rememberMore = true;
    }
    long double returnValue = x;
    if (fabs(startX) < 1.) {
    for (int k = 2; k <= 5000; k++) {
        minusOne = minusOne * (-1);
        x = x * rememberX * rememberX;
        returnValue = returnValue + minusOne * (x/(2 * k - 1));
    }
    } else if (fabs(startX) > 1.) {
        for (int k = 2; k <= 5000; k++) {
        minusOne = minusOne * (-1);
        x = x / (rememberX * rememberX);
        returnValue = returnValue + minusOne * (x/(2 * k - 1));
    }
    returnValue = s21_PI * fabs(rememberX)/(2*rememberX) - returnValue;
    }
   /*
long double sum_atan = 0;
if (-1. < x && x < 1.) {
    for (int i = 0; i < 5000; i++) {
        sum_atan += pow(-1, i) * pow(x, 1 + 2*i)/(1 + 2*i);
    }
} else {
    for (int i = 0; i < 7000; i++) {
        sum_atan += pow(-1, i) * pow(x, -1 - 2*i)/(1 + 2*i);
    }
    sum_atan = s21_PI *sqrt(x*x)/(2*x) - sum_atan;
}
*/
    /*
    if (rememberMore) {
        returnValue = (s21_PI/2 - sign * returnValue) * sign;
    }
    */
    
   // return sign * acos(1/sqrt(1 + x * x));
   return returnValue;
}
long double s21_atan(double x) {
    double sign = 1;
    if (x < 0) {
        sign = -1;

    }
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
   /* for (int k = 2; k <= 150; k++) {
        x = x * rememberX;
        returnValue = returnValue + x/fact(k);
    }*/
    returnValue = 1;
    for (int i = 150; i > 0; --i) {
        returnValue = 1 + x * returnValue / i;
    }
    return returnValue;
}


long double s21_log(double x) {
    long double returnValue = eps;
    long double rememberX;
    long double counterStepen = 0;

    while ((int)x > eps){
        counterStepen++;
        x = x / 10;
    }

  //  if (x - 2. < eps && x - 2. > -eps) {
   //     returnValue = 0.693147180559945286226763982995;
   // } else {
    if (x < 0) {
        returnValue = NAN;
    } else if (x < eps && x > -eps) {
        returnValue = -INFINITY;
    }
    if (returnValue == eps) {
    if (x - 2 < eps) {
        x = x - 1;
    }
    rememberX = x;
    returnValue = x;
    int minusOne = 1;
  //  if (x - 1 < eps) {
    for (int k = 2; k <= 1000; k++) { //чем большее число в логарифм? тем больше шагов надо тут
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
    return returnValue + counterStepen * lnTEN;
}

long double s21_sqrt(double x) {
    long double startX;
    
    startX = x/2;
    long double oldX;
    bool end = false;
    for (int i = 1; i < 1000; i++){
        startX = 1./2 * (startX + x/startX);
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
/*
long double s21_tan(double x) {
    long double B = 1;
    long double sumB = 0;
    for (int n = 1; n < 50; n++) {
        for (int k = 1; k <= n; k++) {
            sumB = sumB + fact(n+1)/(fact(k+1)*fact(n-k)) * B;
        }
        B = -1/(n+1)*sumB;
        if (n % 2 == 0) {

        }
    }
}
*/