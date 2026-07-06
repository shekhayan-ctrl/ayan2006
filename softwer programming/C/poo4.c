#include<stdio.h>

void main (){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    };

  int s;
    for(i=1;i<=5;i++){
        for(s = 4;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    

}