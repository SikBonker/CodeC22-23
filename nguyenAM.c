#include <stdio.h>
#include <string.h>

int main(){
    char *ptr;
    char word[10];
    int i, vowcnt = 0;
    printf("Enter a word: ");
    scanf("%s",&word);
    ptr = &word[0];
    int cntword = strlen(word);
    for(i = 0; i < cntword; i++){
        if((*ptr=='a')||(*ptr=='e')||(*ptr=='i')||(*ptr=='o')||(*ptr=='u')||(*ptr=='A')||(*ptr=='E')||(*ptr=='I')||(*ptr=='O')||(*ptr=='U')){
            vowcnt++;
        }
        ptr++;
    }
    printf("\nThe word is : %s \nThe number of vowels in the word is : %d ",word,vowcnt);
    float vowp = vowcnt/cntword;
    printf("\nPercent of vowels in the word : %d %",vowp);
}
