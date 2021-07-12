#include<stdio.h>
int main()
{
int i, j, k, n=5;
i = 0;
while (i < n) {
    k = 0;
    while (k < i) {
        printf(" ");
        k++;
    }
    j = n;
    while (j > i) {
        printf("*");
        j--;
    }
    printf("\n");
    i++;
}
return 0;
}
