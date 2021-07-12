#include<stdio.h>
int main()
{
    int Totalrow,colsp,row,colstr;
    Totalrow=5;
    for (row=1;row<=Totalrow;row++){
        for (colsp=1;colsp<=row-1;colsp++){
            printf(" ");
        }
        for (colstr=(2*(Totalrow-row))+1;colstr>=1;colstr--){
        printf("*");
        }
        printf("\n");

    }
    for(row=Totalrow-1;row>=1;row--){
        for(colsp=row-1;colsp>=1;colsp--){
            printf(" ");
        }
        for (colstr=1;colstr<=(2*(Totalrow-row))+1;colstr++){
            printf("*");
        }
        printf("\n");
    }
}

