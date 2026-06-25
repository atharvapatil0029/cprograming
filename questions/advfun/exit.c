#include<stdio.h>
#include<stdlib.h>
void test1()
{
    printf("In test 1\n");
   
}
void test2()
{
    printf("In test 2\n");
    
}
void test3()
{
    printf("In test 3\n");
    
}

void my_exist(void)
{
    printf("Exiting program\n");
}
#if 0
int main()
{
 atexit(my_exist);
 test();
 printf("Hello\n");
 return 0;

}
 #endif


 int main()
{
 atexit(my_exist);
 test1();
 atexit(my_exist);
 test2();
 atexit(my_exist);
 test3();
 printf("Hello\n");
 return 0;

}

