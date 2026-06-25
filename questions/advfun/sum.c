#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
    printf("No of argument(s): %d\n", argc);
    int sum = 0;
    float avg = 0;
    for (int i = 1; argv[i]!=NULL; i++)
        sum = sum + atoi(argv[i]); //(*argv[i]-'0')    
    avg = (float)sum /(argc-1);
    
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);
    
    return 0;
}