#include <stdio.h>
#include <string.h>
int main()
{
    //Quest 2
    char chuoi[100];
    char *ptr;
    int i, nguyenAm = 0,sokytu = 0;;

    printf("Nhap vao 1 chuoi: ");
    gets(chuoi);
    ptr = &chuoi[0];
    int s = strlen(chuoi);
    for(i = 0; i < s; i++)
    {
        if((*ptr=='a')||(*ptr=='e')||(*ptr=='i')||(*ptr=='o')||(*ptr=='u')||(*ptr=='A')||(*ptr=='E')||(*ptr=='I')||(*ptr=='O')||(*ptr=='U'))
        {
            nguyenAm++;
        }
        if((*ptr == ' '))
        {
            sokytu--;
        }
        sokytu++;
        ptr++;
    }

    printf("Tong so ky tu: %d",sokytu);
    printf("\nTong so nguyen am la: %d ",nguyenAm);
    printf("\nChuoi o trang thai dao nguoc: ");
    for(i = 0; i <= s; i++)
    {
        if(islower(chuoi[i]))
        {
            printf("%c", toupper(chuoi[i]));
        }
        else if(isupper(chuoi[i]))
        {
            printf("%c", tolower(chuoi[i]));
        }
        else
        {
            printf("%c",chuoi[i]);
        }
    }
}
