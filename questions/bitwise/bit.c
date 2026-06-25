#include<stdio.h>
int main
()
/*{
    //singend value can go to infinity but unsigned value can only go to 255 because of msb 1
    char i =0x26;
    int count ;
    for(count =0;i!=0;i>>=1)
    {
        if(i & 01)
        count++;

    }
    printf("Number of set bits: %d\n", count);
    return 0;
}*/
{
    int x =7,y=7;
    x=7 << 32;
    printf("%d\n",x);
    x=y << 32;
    printf("%d\n",x);
}