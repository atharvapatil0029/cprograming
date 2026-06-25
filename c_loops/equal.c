#include<stdio.h>
int main()
{
        int n,sum=0,i=1;

        printf("Enter the number\n");
        scanf("%d",&n);

        for(i;i<n;i++)
        {
                if(n%i==0)
                {
                        sum=sum+i;
                }
                }
        if(sum == n)
        {
                printf("perfect\n");
        }

      else
              printf("not perfect");
}
