#include <stdio.h>
int main(int argc, char **argv,char **envp)
{
printf("No of argument(s): %d\n", argc);
 printf("List of argument(s):\n");
 for (int i = 0;  envp[i]!=NULL; i++) // or also argv[i] != null can be used
 {
 printf("%d .%s\n", i + 1, envp[i]);
 }
return 0;
}