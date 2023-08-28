/*  Array -> collection of same data type variables
          -> Homogenous data type / user defined data type
          -> continue memory loaction reserved
          -> 2 types -> one-dimensional array , multi-dimensional array
          -> int a,b,c,d,f,r        int arr[5]
          -> index / position -> start with 0(zero)
*/
#include <stdio.h>
int main()
{
    int a[5][5],i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter val a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

/*
    int a[5 ],i;
    int b[] = {11,12,13,14,15,6,17}; // init
    for(i=0;i<5;i++)
    {
        printf("Enter val a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)    // access of element
    {
        printf("b[%d]: %d\n",i,a[i]);
    }
*/