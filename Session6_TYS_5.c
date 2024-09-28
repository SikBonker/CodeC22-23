#include <stdio.h>

int main(){
    char fn[40], ln[40];

    printf("Write first name: ");
    scanf("%s",&fn);
    printf("Write last name: ");
    scanf("%s",&ln);
    printf("Your name is: %s %s",ln,fn);
}
