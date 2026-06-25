#include<stdio.h>

union test{
    char option;
    int id;
    double height;

};

int main()
{
    union test temp;
    temp.height = 7.2;
    printf("%lf\n",temp.height);

    temp.id = 0x1224;
    printf("%lf\n",temp.height);
    printf("%x\n",temp.id);

    temp.option ='1';
    printf("%c\n",temp.option);
    printf("%x\n",temp.id);
    printf("%lf\n",temp.height);

    return 0;
}