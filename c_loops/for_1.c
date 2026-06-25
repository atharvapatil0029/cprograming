#include<stdio.h>
int main()
{
        int n, a =0,b=1,result =0;
        printf("Enter the number to find its Fibonacci:\n");
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
                printf("%d ",a);
                result = a+b;
                a=b;
                b=result;
        }
}