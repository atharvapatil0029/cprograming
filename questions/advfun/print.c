#include<stdio.h>
#include<stdarg.h>

void my_print(const char*fmt,...);

int main()
{
    int num1 = 123, num2 = 987;
    my_print("Emertxe\n");
    my_print("num1 : %d, num2 : %d\n",num1,num2);
    my_print("%d %d %d %d\n",12,23,34,45);
    my_print("%f \n",3.12);
    my_print("%c \n",'A');
    return 0;
}

void my_print(const char*fmt,...)
{
    va_list ap;
    va_start(ap,fmt);
    int x;
    while(*fmt !='\0')
    {
        if(*fmt == '%')
        {
            fmt++;
            if(*fmt == 'd')
            {
                x =va_arg(ap,int);
                fprintf(stdout,"%d",x);
            }
            else if(*fmt == 'f')
            {
                float y =va_arg(ap,double);
                fprintf(stdout,"%f",y);
            }
            else if(*fmt == 'c')
            {
                char c =(char)va_arg(ap,int);
                fprintf(stdout,"%c",c);
            }
        }
        else
        putchar(*fmt);

        fmt++;
    }
    va_end(ap);


}