#include<stdio.h>
int main()
{
    unsigned char x = 0x01;
    unsigned char swapped = ((x & 0x0F) << 4) | ((x & 0xF0) >> 4);
    for(int i=7;i>=0;i--)
    {
       printf("%d", (x >> i) & 1);;
         if(i% 4 == 0)
         printf(" ");
    }

    printf("Swapped:  ");
    for (int i = 7; i >= 0; i--) 
    {
        printf("%d", (swapped >> i) & 1);
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
   
}