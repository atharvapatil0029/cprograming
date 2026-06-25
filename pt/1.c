/*print the 2nd leftmost setbit value in num 
   i/p = 23, o/p = 4
   0001 0111 2nd leftmost set bit is 4.
   */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int count = 0,n =1;
    for(int i = 31;i >= 0;i--)
    {
        if(num &(1<<i))
        {
            count ++;
            if(count == 2)
            {
            printf("%d\n",1<<i);
           break;
            }
        }
    }
   return 0;
}