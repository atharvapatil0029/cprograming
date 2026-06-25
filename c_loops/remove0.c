#include<stdio.h>
int main()
{
   int num,res=0;

   printf("Enter the number:\n");
   scanf("%d",&num);

   if(num<0)
   {
     printf("Invalid\n");
   }
   else
   {
   int fac =1;
   while(num)
   {
     if(num%10!=0)
     {
      res =fac*(num%10)+res;
      fac*=10;
     }
     num/=10;
   }
   printf("%d\n",res);
   }
}