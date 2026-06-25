#include<stdio.h>
int main ()
{
    FILE *fp;
    fp = fopen("test.txt","r");
    if(fp ==NULL)
    {
        perror("error");
        return -1;
    }
    char ch;
    //printf("offset : %ld\n",ftell(fp));
    while((ch = fgetc(fp)) != EOF)
    {
        //fputc(ch,stdout);
        if(ch == 'c')
        {
            printf("c offest : %ld\n",ftell(fp));
        }
    }
    //printf("\noffest : %ld\n",ftell(fp));
    fclose(fp);
    return 0;
}
