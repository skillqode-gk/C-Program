// global variable
#include<stdio.h>
int m,s,e,t;
float per;
void  dis()
{
    printf("maths  marks: %d\n",m);
    printf("science  marks: %d\n",s);
    printf("english  marks: %d\n",e);
    printf("total  marks: %d\n",t);
    printf("Percentage: %.2f\n",per);
}
void clac()
{
    t = m + s+ e;
    per = (float)t/3;
    dis();
}
void setdata()
{
    printf("Enter maths marks: ");
    scanf("%d",&m);
    printf("Enter Science marks: ");
    scanf("%d",&s);
    printf("Enter English marks: ");
    scanf("%d",&e);
    clac();
}
int main()
{
    setdata();   
   
}