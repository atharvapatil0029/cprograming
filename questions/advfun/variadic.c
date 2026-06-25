#include<stdio.h>
#include<stdarg.h>

int add(int count, ...)
{
va_list ap;
int iter, sum;
/* Initilize the arg list */
va_start(ap, count);
sum = 0;
for (iter = 0; iter < count; iter++)
{
/* Extract args */
sum += va_arg(ap, int);
}
/* Cleanup */
va_end(ap);
return sum;
}

int main()
{
    int ret;
    ret = add(2,3,4,4);
    printf("sum is %d\n",ret);

     ret = add(5,3,3,4,5,10);
    printf("sum is %d\n",ret);
}