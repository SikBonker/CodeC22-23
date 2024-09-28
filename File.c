#include <stdio.h>
#include <string.h>
struct SinhVien
{
    int id;
    char name[50];
    int year;
};
typedef struct SinhVien sv;

void Menu()
{
    printf("\n-----------------Menu-----------------\n");
    printf("1. Nhap thong tin cua sinh vien\n");
    printf("2. Xuat thong tin cua sinh vien\n");
    printf("3. Luu thong tin cua sinh vien vao file\n");
    printf("4. Tim kiem thong tin sinh vien\n");
    printf("0. Thoat");
    printf("\n--------------------------------------\n");
}
void InputSV(sv sv[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Nhap ID Sinh Vien %d: ",i+1);
        fflush(stdin);
        scanf("%d",&sv[i].id);
        printf("Nhap ten Sinh Vien %d: ",i+1);
        fflush(stdin);
        scanf("%s",&sv[i].name);
        printf("Nhap nam sinh sinh vien %d: ",i+1);
        fflush(stdin);
        scanf("%d",&sv[i].year);
    }
}
void OutputSV(sv sv[],int n)
{
    printf("\n-----THONG TIN SINH VIEN----\n");
    printf("ID \t Ten \t\t Luong\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d \t %s \t\t %d \n",sv[i].id,sv[i].name,sv[i].year);
    }
}
void InputToTXT(char fn[], sv sv[], int n)
{
    FILE *fp;
    fp = fopen(fn, "w");
    fprintf(fp,"\n-----THONG TIN SINH VIEN----\n");
    fprintf(fp,"ID \t Ten \t\t Nam sinh\n");
    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d \t %s \t\t %d \n",sv[i].id,sv[i].name,sv[i].year);
    }
    fclose(fp);
}
void ReadTXT(char fn[])
{
    FILE *fp;
    char buff[255];
    fp = fopen(fn, "r");
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
    }
    fclose(fp);
}

void SearchSVbyname(sv sv[], char s[], int n)
{
    printf("ID \t Ten \t\t Nam sinh\n");
    for(int i=0;i<n;i++)
    {
        if(strcmp(sv[i].name,s) == 0)
        {
            printf("%d \t %s \t\t %d \n",sv[i].id,sv[i].name,sv[i].year);
        }   c c
    }
}
int main()
{
    int c;
    do
    {
        int n;
        sv sv[100];
        char fn[] = "filetest.txt";
        char s[100];
        Menu();
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Nhap so luong sinh vien: ");
            scanf("%d",&n);
            InputSV(sv,n);
            break;
        case 2:
            OutputSV(sv,n);
            break;
        case 3:
            InputToTXT(fn,sv,n);
            break;
        case 4:
            if(n > 0)
            {
                printf("Nhap ten sinh vien can tim: ");
                fflush(stdin);
                scanf("%s",&s);
                SearchSVbyname(sv,s,n);
            }
            else
            {
                printf("\nSanh sach sinh vien trong!");
            }
            break;
        default:
            break;
        }
    }
    while(c > 0);

}
