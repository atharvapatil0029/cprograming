#include <stdio.h>

int main()
{
    unsigned char x = 0x66;
    int n;

    scanf("%d", &n);

    x &= ~((1 << (n + 1)) - 1);

    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);

        if(i % 4 == 0)
            printf(" ");
    }

    return 0;
}