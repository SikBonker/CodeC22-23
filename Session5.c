#include <stdio.h>

int main(){
    int s, m=3, n=5, r, t;
    float x=3.0, y;
    printf("m=3, n=5, x=3.0\n");
    t = n/m;
    printf("t = n/m = %d \n",t);
    r = n%m;
    printf("t = n%m = %d \n",r);
    y = n/m;
    printf("y = n/m = %f\n",y);
    t = x*y-m/2;
    printf("t = x*y-m/2 = %d\n",t);
    x = x*2.0;
    printf("x = x*2.0 = %f\n",x);
    s = (m+n)/r;
    printf("s = (m+n)/r = %d\n",s);
    y = --n;
    printf("y = --n = %f\n",y);
    return 0;
}
