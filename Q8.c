#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    int x;
    if (ch >= 48 && ch<= 57)
    {
        x = 1;
    }
    else if (ch>= 65 && ch <= 90)
    {
        x = 2;
    }
    else if (ch >= 97 && ch <= 122)
    {
        x = 3;
    }
    else
    {
        x = 4;
    }
    switch (x)
    {
        case 1:
            printf("Number");
            break;
        case 2:
            printf("Uppercase");
            break;
        case 3:
            printf("Lowercase");
            break;

        case 4:
            printf(" special");
            break;

        default:
        {
        printf(" special");
        }
    }
    return 0;
}