#include<stdio.h>

int main()
{
    int a, r, n;

    printf("Enter the first number, common difference/ratio and number of terms: ");
    scanf("%d %d %d", &a, &r, &n);

    // AP
    printf("AP = ");
    int ap = a;
    for(int i = 1; i <= n; i++)
    {
        printf("%d", ap);
        if(i < n) printf(", ");
        ap += r;
    }

    printf("\n");

    // GP
    printf("GP = ");
    int gp = a;
    for(int i = 1; i <= n; i++)
    {
        printf("%d", gp);
        if(i < n) printf(", ");
        gp *= r;
    }

    printf("\n");

    // HP (reciprocal of AP)
    printf("HP = ");
    ap = a;  // reset AP
    for(int i = 1; i <= n; i++)
    {
        printf("%f", 1.0 / ap);
        if(i < n) printf(", ");
        ap += r;
    }

    printf("\n");

    return 0;
}
