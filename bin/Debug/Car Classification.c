#include "stdio.h"
#include <stdlib.h>

#define D 30
#define ST_AVTOV 3

typedef struct{
char ime[D+1];
int HP;
int Torq;
float acc;
int topspeed;
double money;
}car;

int main()
{
car one={"Rimac C-Two", 1914, 2300, 1.85, 412, 2000000};
car two={"Aston Martin Vulcano", 820, 800, 2300000 };
car three={"Aston Martin DB11 V12", 600, 700, 3.8, 322, 285750};

car lestvica[ST_AVTOV]={one,two,three};

int primerjajHP(const void *x, const void *y){
    return (((car *)y)->HP - ((car *)x)->HP);//odvisno kako želiš imeti razporejeno x<->y
    }

qsort(lestvica, ST_AVTOV, sizeof(car), primerjajHP);
for(int i = 0; i < ST_AVTOV; i++){
    printf("%d %s\n", lestvica[i].HP, lestvica[i].ime);
}
    return 0;
}
