#include <stdio.h>
#include <time.h>

int main(){
    char Name[40];
    int n,batch,dd,mm,yy;

    printf("Date Examination\n");
    printf("Day:");
    scanf("%d",&dd);
    printf("Month:");
    scanf("%d",&mm);
    printf("Year:");
    scanf("%d",&yy);
    printf("Studen name: ");
    scanf("%s",&Name);
    printf("Batch: ");
    scanf("%d",&batch);
    printf("Studen \t Date of Examination \t Batch\n");
    printf("%s \t\t %d/%d/%d \t\t %d\n",Name,dd,mm,yy,batch);
    return 0;

}
