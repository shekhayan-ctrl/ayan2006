#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[30];
    float par;
};

void main(){
    struct student s1={1,"AYAN",78.00};
    printf("id=%d,name=%s,per=%f\n",s1.id,s1.name,s1.par);
    struct student s2={2,"YASH",80.00};
    printf("id=%d,name=%s,per=%f\n",s2.id,s2.name,s2.par);
    struct student s3;
    s3.id = 12;
    printf("s3 id =%d\n",s3.id);
    strcpy(s3.name,"User 3");\
    printf("s3 name = %s",s3.name);

    
}
