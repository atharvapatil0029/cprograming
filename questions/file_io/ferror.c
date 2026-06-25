#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("test2.txt","r");
    if(fp == NULL)
    {
        perror("ERROR");
        return -1;

    }
    char ch;
    ch = fgetc(fp);
    if(ferror(fp))
      fprintf(stderr,"Error in reading from file\n");

      clearerr(fp);
      if(ferror(fp))
        fprintf(stderr,"Error in reading from file\n");
    fclose(fp);
    return 0;    
}