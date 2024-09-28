#include <stdio.h>

float PerimeterC(float r){
    float P = 2*3.14*r;
    return P;
}
float AreaC(float r){
    float A = 3.14*r*r;
    return A;
}
void main(){
    float r;
    printf("Input the R: ");
    scanf("%f",&r);\
    printf("\nThe area of the circle : %0.2f",AreaC(r));
    printf("\nThe perimeter of the circle : %0.2f",PerimeterC(r));
}
