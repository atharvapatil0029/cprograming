#include<stdio.h>
int main()
{
    printf("Program:\%s\\n\"", __FILE__);
    printf("Compiled on:\%s\" at \%s\\n\"", __DATE__, __TIME__);
   // printf("This program is written in C language standard version:\%s\"", __STDC_VERSION__);
    printf("This print is from the function :\%s\\n\"", __func__);
    printf("This print is from the line number :\%d\\n\"", __LINE__);
    return 0;
}