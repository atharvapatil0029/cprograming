#include <stdio.h>
int main()
{
    int num1=123;
    char ch = 'A';
    float num2 =12.345;
    char string1[] ="sprintf() Test";
    char string2[50];
    sprintf(string2, "num1: %d, ch: %c, num2: %.3f, string1: %s", num1, ch, num2, string1);
    printf("%s\n", string2);
    return 0;
}