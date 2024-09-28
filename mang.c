#include <stdio.h>
#include <math.h>

int main(){
    int ary[10];
    int i,high,total,min;
    total = 0;
    high = 0;
    min = 0;
    for(i = 0; i < 10; i++){
        printf("\n Enter value %d : ",i+1);
        scanf("%d",&ary[i]);
        total = total + ary[i];
        if(high < ary[i]){
            high = ary[i];
        }
        if(min > ary[i]){
            min = ary[i];
        }
    }
    float av = (float)total/i;
    printf("Total: %d\n",total);
    printf("Average: %0.2f\n",av);
    printf("Highest: %d",high);
    printf("Lowest: %d",min);

}
