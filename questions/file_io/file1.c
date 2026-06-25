#include<stdio.h>
int main()
/*{
    FILE*fp;
    fp = fopen("test1.txt","r+");
    if(fp == NULL)
    {
        perror("Error");
        return -1;
    }
    fclose(fp);
    return 0;
}*/
{
    FILE *fp,*fp1;
    fp = fopen("test.txt", "r");
    fp1 = fopen("test2.txt", "w");
    if(fp == NULL || fp1 == NULL)
    {
        perror("Error");
        return -1;
    }
    char ch;
    while(ch = fgetc(fp))
    {
        if(feof(fp))
            break;
        fputc(ch, fp1);
    }
    printf("File copied successfully.\n");
    fclose(fp);
    fclose(fp1);
    return 0;
}