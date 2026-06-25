#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^.]",str);
    printf("%s",str);
    
    int words=0;
    int characters=0;
    int line =0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' || str[i]=='\t')
        {
            words++;
        }
        else if(str[i]=='\n')
        {
            line++;
        }
        else
        {
            characters++;
        }
    }
    printf("\nCharacters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", line);
    return 0;
}