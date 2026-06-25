#include<stdio.h>
struct emertxe  //datatype
{
    /*if the datatype of mentor is not 
    present we cannot create n number of variables */
    struct mentor //datatype
    {
        int id;
        char name[20];
        char address[50];
    } mnt; // variable of datatype of mentor

    struct student
    {
        int id;
        char name[20];
        char address[50];
    } stu;
    /*if the name of the variable is not give
    we need to access it directly : un named struct.
    this unnamed struct is the consired as the member 
    of the struct emertxe*/
};

int main()
{
    struct emertxe s; // s is the variable of datatype struct emertxe
    s.mnt.id = 123;
    s.stu.id =321;
    printf("Mentor ID : %d\n",s.mnt.id);
     printf("Student ID : %d\n",s.stu.id);
}