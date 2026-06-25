#include<stdio.h>
int main()
/*{
    int count =0;
    unsigned char i =0x6E;
    int pos;
    scanf("%d",&pos);

    if(i & (1 << pos))
    {
        printf("Bit is set\n");
    }
    else
    {
        printf("Bit is not set\n");
    }
}*
{
    int x;
    scanf("%d",&x);
    int i;
    for(i=31;i>=0;i--)
    {
        if(x & (1 << i))
        {
            printf("1");
        }
        else 
        printf("0");
        if(i% 4 == 0)
         printf(" ");
    }
    printf("\n");
}*/
// printf can also be written as printf("%d\n",x & (1 << pos)); to print 0 or 1 directly


{
    unsigned char x = 0x66;   // 0110 0110
    int n;

    scanf("%d", &n);

    unsigned char result = x & ((1 << (n + 1)) - 1);

    printf("Result = ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (result >> i) & 1);
        if(i % 4 == 0)
            printf(" ");
    }

    return 0;
}