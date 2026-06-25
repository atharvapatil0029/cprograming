#include<stdio.h>

// This program demonstrates the use of fwrite and fread to write and read a structure to/from a file.
struct data
{
    int n1;
    char oper;
    int n2;
    char str[20];
    float n3;
};

 int main()
 {
    struct data d1 = {2,'+',1,"is",1.1};
    struct data d2;
    FILE *fp;
   if((fp = fopen("test2.txt","w+")) == NULL)
    {
        fprintf(stderr,"cant open the file\n");
        return 1;
    }
    fwrite(&d1,sizeof(struct data),1,fp);
    rewind(fp);
    fread(&d2,sizeof(struct data),1,fp);
    printf("%d %c %d %s %f\n",d2.n1,d2.oper,d2.n2,d2.str,d2.n3);
    fclose(fp);
    return 0;


 
 }
 // This program demonstrates the use of fprintf and fscanf to write and read formatted data to/from a file.

 /*
    scanf("%d %d",&n1,&n2);
    fwrite(&n1,sizeof(int),1,fp);
    fwrite(&n2,sizeof(int),1,fp);
    rewind(fp);
    fread(&n3,sizeof(int),1,fp);
    fread(&n4,sizeof(int),1,fp);
    printf("%d %d\n",n3,n4);
    fclose(fp);
    return 0;*/