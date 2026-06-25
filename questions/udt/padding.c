#include<stdio.h>
struct padding // sie of the struct is 12 byte because of padding to highest datatype
{
  char ch1; 
  char ch2;
  int id;
  double o;
};

int main()
{
    struct padding p;
    printf("%zu\n",sizeof(struct padding));
    printf("%zu\n",sizeof(p));
}

/*depending ont next datatype the perivous datatype bytes are 
padded and also depending ont the highest member in struct and word sie
Ex : int  4bytes
     char 1bytes
     char 1bytes + 2padding bytes
the output will be 8.

use pragma pack to avoid padding 
*/