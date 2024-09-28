#include <stdio.h>
#include <conio.h>

int main()
{
    int letter;
    printf("Choose a b c d f p or v:");
    scanf("%c",&letter);
    switch(letter)
    {
    case 65:
    case 97:
        printf("Ada");
        break;
    case 66:
    case 98:
        printf("Basic");
        break;
    case 67:
    case 99:
        printf("COBAL");
        break;
    case 68:
    case 100:
        printf("dBASE III");
        break;
    case 70:
    case 102:
        printf("Fortan");
        break;
    case 112:
    case 80:
        printf("Pascal");
        break;
    case 86:
    case 118:
        printf("Visual C");
        break;
    default:
        printf("You did not select any of the above");
    }
}
