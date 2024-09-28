#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Input 3 value\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
    if(a > b && a > c)
    {
        printf("The highest value is a: %d",a);
    }
    else if(b > a && b > c)
    {
        printf("The highest value is b: %d",b);
    }
    else if(c > a && c > b)
    {
        printf("The highest value is c: %d",c);
    }
    else if(b == a && b > c)
    {
        printf("The highest value is a and b: %d",b);
    }
    else if(c > b && c == a)
    {
        printf("The highest value is c and a: %d",c);
    }
    else if(b == c && b > a)
    {
        printf("The highest value is c and b: %d",c);
    }
    else
    {
        printf("Three value is equal");
    }
    return 0;
}
