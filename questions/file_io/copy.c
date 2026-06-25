#include<stdio.h>
int main (){
    FILE *fp,*fc;
    fp = fopen("org.jpg","r");
    fc = fopen("copied.jpg","w");
    if(fp == NULL || fc == NULL)
    {
        perror("ERROR");
        return -1;
    }
    char ch;
    while(fread (&ch,1,1,fp)>0)
    {
        fwrite(&ch,1,1,fc);
    }
    printf("File copied successfully\n");
    fclose(fp); 
    fclose(fc);
    return 0;
}