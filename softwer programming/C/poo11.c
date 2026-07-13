#include<stdio.h>

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    int s;
    for(i=1;i<=5;i++){
        for(s=5;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }        
        printf("\n");
    }

    for(i=5;i>=1;i--){
        for(s=1;s<=5-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for (i=1;i<=5;i++){
        for(s = 4;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=1;i<=5;i++){
        for(s=2;s<=i;s++){
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {printf("* ");}
        printf("\n");
    }


    for(i=1;i<=5;i++){
        for(s=4;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
      
    }
      for(i=1;i<=5;i++){
        for(s=2;s<=i;s++){
            printf(" ");
        }
        for(j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    
    for (i=1;i<=5;i++){
        for(j=1;j<=5  ;j++){
            printf("*");
        }
        printf("\n");
    }
    


}