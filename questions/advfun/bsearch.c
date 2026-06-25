#include<stdio.h>
#include<stdlib.h>
int sa(const void *a, const void *b)
{
    if(*(int *)a > *(int *)b)
    return 1;
    if(*(int *)a < *(int *)b)
    return -1;
    return 0;
}
/*int sd(const void *a, const void *b)
{
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    if (ia > ib) return -1;
    if (ia < ib) return 1;
    return 0;
}*/
void print_arr(int *a, unsigned int size)
{
int i = 0;
for (i = 0; i < size; i++)
{
printf("%d ", a[i]);
}
printf("\n");
}

int main()
{
    int a[5] ={9,2,6,1,7} , x=9;
    qsort(a,5,sizeof(int),sa);
    printf("Ascending :"); print_arr(a,5);
/*qsort(a,5,sizeof(int),sd);
    printf("Descending :"); print_arr(a,5);*/
    int*ptr = bsearch(&x,a,5,sizeof(int),sa);

    if(ptr == NULL)
    {
        printf(" NOT FOUND");
    }
    else
    printf(" FOUND");
    return 0;
}