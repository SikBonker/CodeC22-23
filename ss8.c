#include <stdio.h>
#include <conio.h>

int main(){
    int x, y;
    printf("Assign value to x: ");
    scanf("%d",&x);
    printf("Assign value to y: ");
    scanf("%d",&y);
    if(x <= 2000 || x >= 3000){
        printf("X: %d",x);
    }
    if(y >= 100 && y <= 500){
        printf("Y: %d",y);
    }
}
