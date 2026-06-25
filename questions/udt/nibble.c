#include<stdio.h>
#if 0
struct Nibble
{
   unsigned  char lower : 4;
  unsigned upper : 4;
};

int main()
{
    struct Nibble n;
    n.lower = 0xA;
    n.upper = 0x2;
    printf("%p\n",&n);
    printf("%zu\n",sizeof(n));
    printf("%d\n",n.upper);
    printf("%d\n",n.lower);
    return 0;
}
#endif


#if 1
struct Nibble
{
     char lower : 4;
  char upper : 4;
};

int main()
{
    struct Nibble n;
    n.lower = 0x2;
    n.upper = 0xA;
    printf("%p\n",&n);
    printf("%zu\n",sizeof(n));
    printf("%d\n",n.upper);
    printf("%d\n",n.lower);
    printf("%#o\n",n.upper);
    printf("%#x\n",n.lower);
    return 0;
}
#endif