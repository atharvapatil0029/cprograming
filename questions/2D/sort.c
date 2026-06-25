#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the no of rows and coloumn\n");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
}