#include<stdio.h>

#define SET_BIT(num,pos) num | (1 << pos)

int main()
{
    int num = 4; // binary: 101
    int pos = 2;
    printf("Original number: %d\n", num);
    printf("Number after setting bit at position %d: %d\n", pos, 2*SET_BIT(num, pos));
    return 0;
}