#include <stdio.h>

int main()
{
    //Quest 1
    int i = 0;
    int so;
    int soLN = 0;
    char c;
    do
    {
        printf("Moi ban nhap vao 1 so: ");
        scanf("%d",&so);
        if(so > soLN)
        {
            soLN = so;
        }
        printf("\nBan co muon tiep tuc khong(Y/N): ");
        scanf(" %c",&c);
    }
    while(c == 'y' || c == 'Y');
    printf("So lon nhat la: %d",soLN);

}
