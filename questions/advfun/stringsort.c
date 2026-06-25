#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sa(const void*a,const void *b)
{
    return strcmp((char*)a, (char *)b);
}
void print_arr(char arr[][20],int s)
{
    int i;
    for(i =0;i<s;i++)
    printf("%s ",arr[i]);
    printf("\n");
}

int main()
{
    char str[5][20]= {"atharva","anmol","amey","abhishek","aaaaa"};
    qsort(str,5,sizeof(char[20]),sa);
    print_arr(str,5);
}