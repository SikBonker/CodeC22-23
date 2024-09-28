#include <stdio.h>

factorial(int x){
    int y = 1;
    for(int i = 1;i <= x;i++){
        y = y * i;
    }
    return y;
}
void main(){
    int x;
    printf("Input the integer to calculate the factorial of it: ");
    scanf("%d",&x);
    printf("The factorial of %d : %d",x,factorial(x));
}
