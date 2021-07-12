#include<stdio.h>
int main()
{
    int a, i, j, n;

    printf("Enter the number of star: ");
    scanf("%d",&a);

    for(i=a; i>=1; --i)
    {
        for(n=0; n < a-i; ++n)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
    }

    return 0;
}
