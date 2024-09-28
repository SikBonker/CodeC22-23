#include <stdio.h>

int main()
{
    //Quest 3
    int x,y = 1;
    printf("Nhap vao so muon tinh luy thua: ");
    scanf("%d",&x);
    for(int i = 1; i <= x; i++)
    {
        y = y * i;
    }
    printf("Luy thua cua %d la: %d",x,y);
}
