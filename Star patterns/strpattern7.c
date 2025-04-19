#include<stdio.h>
int main(){
    int i,j,rows=5,space;
    for(i=1;i<=5;i++){
        for(space=1;space<=(rows-i);space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}