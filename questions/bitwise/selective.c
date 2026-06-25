#include<stdio.h>
int main()
{
   /* char name[50];
    scanf("%[a-zA-Z ]", name);
    printf("%s", name);

    char num[10];
    scanf("%[0-9]", num);
    printf("%s", num);

    int num =100,ret;
    printf("Enter a number: ");
    ret = scanf("%d", &num);
    if(ret == 1)
    {
        printf("You entered: %d", num);
    }
    else
    {
        printf("Invalid input");
    }*/
   char arr1[20],arr2[20];
   int age;
   sscanf("I am 22 years old","%s %s %d",arr1,arr2,&age);
    printf("%s %s %d",arr1,arr2,age);

    sscanf(" hi I am 22 years old ","%*s %*s %*s %d", &age);
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("OK YOU ARE %d YEARS OLD",age);
}