#include <stdio.h>
#include <math.h>

int main()
{
    int diem[5][3];
    int max,min;
    max = 0;
    min = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Nhap diem sinh vien %d : \n",i+1);
        for(int j = 0; j <3; j++)
        {
            printf("Mon thu %d: ",j+1);
            scanf("%d",&diem[i][j]);
            if(max < diem[i][j])
            {
                max = diem[i][j];
            }
            if(min > diem[i][j])
            {
                min = diem[i][j];
            }
        }

    }
    printf("\nHighest: %d",max);
    printf("\nLowest: %d",min);
}
