// pointer(refernce variable) -> store to address of another variable as data
#include<stdio.h>
int main()
{
    int a[5] = {11,22,33,44,55};
    int *p;
    p = &a;
    for(int i=0;i<5;i++){
        printf("%d\t%u\n",*(p+i), (p+i));   `   
        // printf("%d\t%u\n",a[i], &a[i]);
    }
}


/*
    int a = 50, *p, **q;
    p = &a;
    q = &p;
    printf("Value of a is: %d\n",a);
    printf("Address of a is: %u\n",&a);
    printf("Address of a using p is: %d\n",p);
    printf("Address of p is: %u\n",&p);
    printf("Value of a using p is: %d\n",*p);
    printf("Address of p using q is: %d\n",q);
    printf("Address of q is: %d\n",&q);
    printf("Value of a using q is: %d\n",**q);
*/