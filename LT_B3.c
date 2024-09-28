#include <stdio.h>

int main(){
    int temp, a, b;
    printf("a =");
    scanf("%d",&a);
    printf("b =");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d b = %d",a,b);
    return 0;
}
