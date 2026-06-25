#include<stdio.h>
union Endian
{
unsigned int vlaue;
unsigned char byte[4];
};
int main()
{
union Endian e = {0x12345678};
e.byte[0] == 0x78 ? printf("Little\n") : printf("Big\n");
return 0;
}

/*
union Endian
{
unsigned int vlaue;
unsigned char byte[37];

but the sie allocated is 40 bytes because of padding 
the padding in union also but in some cases.
 */