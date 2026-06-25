#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    char address[50];
};

void read_data(struct student s[],int n)
{
    for(int i=0; i<n ;i++)
    {
        scanf("%d %s %s",&s[i].id,s[i].name,s[i].address);
    }

}

void print_data(struct student s[],int n)
{
for(int i=0; i<n ;i++)
    {
        printf("%d %s %s\n",s[i].id,
            s[i].name,
            s[i].address);
    }

}
/*void update_data(struct student*s)
{
 s->id = 1089;
 strcpy(s->name,"Atharv");
 strcpy(s->address,"Belgaum");
};*/
#if 0
int main()
{
    struct student s;
    s.id =123;                 // struct stduent s={.name = "  ", .id= 123, ,address = "  "}
    strcpy(s.name,"Atharva");
    strcpy(s.address,"hiiiiiiiii");
    printf("ID :%d\n",s.id);
    printf("Name : %s\n",s.name);
    printf("Address : %s\n",s.address);
    update_data(&s);
    printf("ID :%d\n",s.id);
    printf("Name : %s\n",s.name);
    printf("Address : %s\n",s.address);
}
#endif

#if 0
int main()
{
   struct student s;
   printf("Enter Id Name and Address");
   scanf("%d %s %s",&s.id,s.name,s.address);
    
    printf("ID : %d\n",s.id);
    printf("Name : %s\n",s.name);
    printf("Address : %s\n",s.address);
}
#endif

#if 1
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student s[n];
   
    printf("Enter ID,Name and Address");
    read_data(s,n);
    
    print_data(s,n);

    return 0;
}
#endif