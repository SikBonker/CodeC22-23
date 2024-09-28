#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int kq = 1;
    printf("Nhap vao gia thua: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        kq *= i;
    }
    printf("%d",kq);
}
