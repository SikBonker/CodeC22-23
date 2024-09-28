#include <stdio.h>

int main(){
    char name[40];
    int basic, daper;
    float bonper, loandet, salary;

    printf("Write your name: ");
    scanf("%s",&name);
    printf("Basic: ");
    scanf("%d",&basic);
    printf("Daper: ");
    scanf("%d",&daper);
    printf("Bonper: ");
    scanf("%f",&bonper);
    printf("Loandet: ");
    scanf("%f",&loandet);

    salary = basic + basic * daper /100 + bonper * basic/100 - loandet;
    printf("Your salary is: %0.2f dollar",salary);
}
