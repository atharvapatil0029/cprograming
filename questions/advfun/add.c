#if 0

#include <stdio.h>
int add(int num1, int num2)
{
return num1 + num2;
}
int sub(int num1,int num2)
{
 return num1 - num2;
}


int main()
{
int num1=20,num2=20;
 int (*fptr)(int, int); 
fptr = add;
int(*fptr1)(int,int);
fptr1 = sub;
printf("%d\n", add(num1,num2));
printf("%d\n", fptr(num1,num2));
printf("%p\n", &fptr);
printf("%d\n", (*fptr)(12,16));
printf("%d\n", sub(num1,num2));
printf("%d\n", fptr1(num1,num2));
printf("%p\n", &fptr1);
printf("%d\n", (*fptr1)(12,16));
return 0;
}

#endif

#if 1

#include <stdio.h>
int add(int num1, int num2)
{
return num1 + num2;
}
int sub(int num1,int num2)
{
 return num1 - num2;
}

int operation(int(*fp)(int,int),int a,int b)
{
    return fp(a,b);
}

int main()
{
    printf("%d\n",operation(add,3,7));
    printf("%d\n",operation(sub,3,7));
    return 0;
}
#endif