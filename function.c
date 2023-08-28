/*
    function - specific task to perform
        argument    return
    1.  No          No
    2.  No          With
    3.  With        No
    4.  With        With
*/

// WANR
#include<stdio.h>
int Product(int a, int b){
    int t ;
    t = a * b;
    return t;
}
int main()
{
    // Product(2,5);
    int x, y,p;
    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);
    // Product(x,y);
    p = Product(x,y);
    printf("Product of a and b is: %d",p);
}

