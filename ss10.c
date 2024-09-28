#include <stdio.h>

int main(){
    //Cau 1
//    int age;
//    char name[20];
//
//    printf("Your Name: ");
//    scanf("%s",&name);
//    printf("Your age: ");
//    scanf("%d",&age);
//
//    for(int i = 0; i < age ; i++ ){
//        printf("%s\n",name);
//    }

    //Cau 2
    int n;
    printf("Input number: ");
    scanf("%d",&n);

    for(int i = 1;i <=n; i++){
        for(int j = 1;j <= i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
