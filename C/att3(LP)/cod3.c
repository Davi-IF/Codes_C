#include<stdio.h>

int main () {

    float D, AS, T;

    printf("what's the distance:");
    scanf("%f", &D);
    printf("what's the average speed:");
    scanf("%f", &AS);
   
    T = D/AS;

    printf("the time is: %.1f hours", T);

}