#include <stdio.h>

int main(){
    int a,b,c,r;
    printf("nhap canh hinh vuong: ");
    scanf("%d",&a);
    printf("Chu vi hinh vuong: %d\n",a*4);
    printf("Dien tich hinh vuong: %d\n",a*a);
    printf("nhap chieu dai hcn: ");
    scanf("%d",&a);
    printf("nhap chieu rong hcn:");
    scanf("%d",&b);
    printf("Chu vi hinh chu nhat: %d\n",a*2+b*2);
    printf("Dien tich hinh chu nhat: %d\n",a*b);
    printf("nhap ban kinh ht: ");
    scanf("%d",&r);
    printf("Chu vi hinh tron: %0.2f \n",2*3.14*r);
    printf("Dien tich hinh tron: %0.2\n",3.14*r*r);
    printf("nhap 3 canh htg: ");
    printf("nhap 3 canh htg a: ");
    scanf("%d",&a);
    printf("nhap 3 canh htg b: ");
    scanf("%d",&b);
    printf("nhap 3 canh htg c: ");
    scanf("%d",&c);
    printf("Chu vi hinh tam giac: %d ",a+b+c);
    scanf("%d",&c);

}
