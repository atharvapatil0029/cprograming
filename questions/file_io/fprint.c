#include<stdio.h>
int main ()
{
    int n,n1;
    char c,str[20];
    float n2;
    FILE *fp;
    fp = fopen("test2.txt","r");
    if(fp ==NULL)
    {
        perror("error");
        return -1;
    }
  if((fp =fopen("test2.txt","w+"))==NULL)
  {
    fprintf(stderr,"cant open the file\n");
    return 1;

  }
  fprintf(fp,"%d %c %d %s %f\n",2 ,'+',1,"is",1.1);
  //rewind(fp); 
  fseek(fp,0L,SEEK_SET); //fseek
  fscanf(fp,"%d %c %d %s %f",&n,&c,&n1,str,&n2);

  printf("%d %c %d %s %f\n",n,c,n1,str,n2);
  fclose(fp);
  return 0;
}
