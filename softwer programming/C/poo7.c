#include<stdio.h>

void main(){

    int a= 12;
    printf("a = %d\n",a);

    a +=2;
    printf("a =%d\n",a);
    
    a+=12;
    printf("a=%d\n",a);

    int b=1;

    a-=b;
    printf("a=%d\n",a);

    a-=12;
    printf("a=%d\n",a);

    a*=5;
    printf("a=%d\n",a);

    int i,j;
    printf("enter value i= ");
    scanf("%d",&i);
    printf("enter vaiue j= ");
    scanf("%d",&j);

    printf("%d\n",(i+j));
    printf("%d\n",(i-j));
    printf("%d\n",(i*j));
    printf("%d\n",(i%j));
}