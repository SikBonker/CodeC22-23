#include <stdio.h>

int main(){
    float cm, f, i;
    printf("input centimeters: ");
    scanf("%f",&cm);
    i = cm/2.54;
    f = i/12;
    printf("feet: %0.1f, inches: %0.1f",f,i);

    return 0;
}
