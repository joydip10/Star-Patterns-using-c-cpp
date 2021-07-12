#include<stdio.h>
int main ()
{
    int a,b,c,d;
    a=5;
    for (c=1;c<=a;c++){
        for(b=a-c;b>=1;b--){
            printf(" ");
        }
        for (d=1;d<=c;d++)
        {
          printf("*");
        }
        printf("\n");
    }
    for (c=a-1;c>=1;c--){
        for (b=1;b<=a-c;b++){
            printf(" ");
        }
        for (d=c;d>=1;d--){
            printf("*");
        }
        printf("\n");
    }
}

