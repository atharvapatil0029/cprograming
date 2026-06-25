#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch ='y';
    printf("Enter the string :");
    while(ch !='n')
    {
        scanf("%c",&ch);
        while(getchar() != '\n');
        printf("You entered : %c\n",ch);
    }
}
