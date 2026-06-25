#include<stdio.h>
#define SWAP(a,b){\
    int temp = a;\
    a = b;\
    b = temp;\
}

int main()
{
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);
    SWAP(x, y);
    printf("After second swap: x = %d, y = %d\n", x,y);
    return 0;
}