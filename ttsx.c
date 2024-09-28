#include <stdio.h>
#include <string.h>

int main(){
    int ary[5];
    int i, j, temp;
    for(i = 0; i < 5; i++){
        printf("nhap vao phan tu thu %d : ",i+1);
        scanf("%d",&ary[i]);
    }
    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(ary[i] > ary[j]){
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep : ");
    for(i = 0; i < 5; i++){
        printf("%d ",ary[i]);
    }
}
