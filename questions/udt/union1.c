#include<stdio.h>

union FloatBits
{
float degree;
struct
{
unsigned m : 23;
unsigned e : 8;
unsigned s : 1;
} elements;
};
int main()
{
union FloatBits fb = {3.2};
printf("%f\n",fb.degree);
printf("Sign: %X\n", fb.elements.s);
printf("Exponent: %X\n", fb.elements.e);
printf("Mantissa: %X\n", fb.elements.m);

union FloatBits fb1 = {-3.2};
printf("%f\n",fb1.degree);
printf("Sign: %X\n", fb1.elements.s);
printf("Exponent: %X\n", fb1.elements.e);
printf("Mantissa: %X\n", fb1.elements.m);
return 0;
}
