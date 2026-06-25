#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
        perror("Error");
        return -1;
    }
    char ch;
    while(ch = fgetc(fp))
    {
        if(ch == EOF)
            break;
        fputc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
