#include <stdio.h>

void main()
{

//    static int ary[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
//    int i;
//    for (i= 0; i<12; i++)
//    {
//        printf("\ni=%d ary[i]=%d *(ary+i)=%d",i,ary[i],*(ary + i));
//        printf("&ary[i]=%X ary+i=%X",&ary[i],ary+i);
//    }
    char a, str[81], *ptr;
    printf("\nEnter a sentence:");
    gets(str);
    printf("\nEnter character to search for: ");
    a = getche();
    ptr = strchr(str,a);
    /* return pointer to char*/
    printf("\nString starts at address: %u",str);
    printf("\nFirst occurrence of the character is at address: %u ",ptr);

    printf("\n Position of first occurrence(starting from 0)is: % d", ptr-str);
}
