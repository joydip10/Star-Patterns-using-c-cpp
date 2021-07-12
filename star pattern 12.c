#include<stdio.h>
int main()
{
    int i, j, k, n=5;
i = 1;
while (i <= n) {
    k = n;
    while (k > i) {
        printf(" ");
        k--;
    }
    j = 0;
    while (j < i) {
       printf("*");
       j++;
    }
    printf("\n");
    i++;
}
return 0;
}
