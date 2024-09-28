#include <stdio.h>

int main(){
    int s;
    printf("nhap vao 1 so: ");
    scanf("%d",&s);
    if(s % 2 == 0){
        printf("%d la so chan",s);
    }else if(s % 2 != 0){
        printf("%d la so le",s);
    }
}
