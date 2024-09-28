#include <stdio.h>
#include<math.h>
#include<string.h>

struct employee{
    int id;
    char name[50];
    float salary;
};
typedef struct employee el;

void InputE(el el[],int n){
    for(int i = 0; i < n; i++){
        printf("Input the ID employee %d: ",i+1);
        fflush(stdin);
        scanf("%d",&el[i].id);
        printf("Input the name employee %d: ",i+1);
        fflush(stdin);
        scanf("%s",&el[i].name);
        printf("Input the salary employee %d: ",i+1);
        fflush(stdin);
        scanf("%f",&el[i].salary);
    }
}
void OutputE(el el[],int n){
    printf("\n-----THONG TIN NHAN VIEN----\n");
    printf("ID \t Ten \t\t Luong\n");
    for(int i = 0; i < n; i++){
        printf("%d \t %s \t\t %0.2f \n",el[i].id,el[i].name,el[i].salary);
    }
}

int main(){
    int n;
    el el[100];
    printf("Input number of employee: ");
    scanf("%d",&n);
    InputE(el,n);
    OutputE(el,n);
    return 0;
}
