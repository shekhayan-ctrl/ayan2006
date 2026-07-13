#include<stdio.h>

void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
  
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    int s;
    for(i=1;i<=5;i++){
        for(s=5;s>=i;s--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
  
    
     for(i = 1;i<=5;i++){ 
        for(j = 1;j<=i;j++){ 
            printf("%d",j);
        }
        printf("\n");
    }
    for(i = 1;i<=5;i++){ 
        for(j = 1;j<=i;j++){ 
            printf("%d",i);
        }
        printf("\n");
    }

     for(i=1;i<=5;i++){
        for(s = 4;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    

      for(i=1;i<=5;i++){
        for(s = 2;s<=i;s++){
            printf(" ");
        }
        for(j=5;j>=i;j--){
            printf("* ");
        }
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

          for(i=1;i<=5;i++){
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
            for(j=5;j>=i;j--){
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


    }
     
     for(i=1;i<=5;i++){
        for(s=1;s<=6-i;s++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=6;i++){
        for(s=1;s<=6-i;s++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
        
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if((i+j)%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            
        }
        printf("\n");
    }


}