#include<stdio.h>
int main()
{
        int num,flag=0;

        printf("Enter the number\n");
        scanf("%d",&num);

        for(int i =2;i*i<=num;i++)
        {
         if(num%i==0)
         {
          flag=1;
          break;
         }
        }
        if(flag==0)
                printf("prime\n");
        else
                printf("not prime\n");

}