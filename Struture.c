// Structure -> collection of variable diffrent data types
#include<stdio.h>
struct Student{
    int roll;
    char name[20];
    int m,s,e,t;
    float per;
};
int main()
{
    struct Student a[5];
    int i;
    for(i = 0;i<2;i++){
        printf("*********************\n");
        printf("Enter roll no: ");
        scanf("%d",&a[i].roll);
        printf("Enter name: ");
        scanf("%s",&a[i].name);
        printf("Enter maths marks: ");
        scanf("%d",&a[i].m);
        printf("Enter science marks: ");
        scanf("%d",&a[i].s);
        printf("Enter english marks: ");
        scanf("%d",&a[i].e);
        printf("\n");
    }
    printf("Roll\tName\tMaths\tSci\tEng\tTotal\tPercentage");
    printf("\n======================================================");
    for(i=0;i<2;i++){
        a[i].t = a[i].m + a[i].s + a[i].e;
        a[i].per = (float)a[i].t / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].roll,a[i].name,
        a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);
    }
}