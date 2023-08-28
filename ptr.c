#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    
   int* arr = (int*)malloc(n * sizeof(int));

   if (arr==NULL)
   {
    printf("Error");
    return 1;
   }
   for(i=0;i<n;i++)
   {
    arr[i]= i*2+2;
   }
   int* newarr = (int*)calloc(2 * n, sizeof(int));
   
   if(newarr==NULL)
   {
    printf("Error");
    free(arr);
    return 1;
   }

   for(i=0;i<2*n;i++)
   {
    newarr[i]= (i<n)?arr[i]:2 *(n-i)+arr[n-1];
   }
 for(i=0;i<n;i++)
   {
    printf("%d\t",newarr[i]);
   }
   int* finalarr = (int*)realloc(newarr,n*sizeof(int));
    
    if(finalarr == NULL)
    {
        printf("Error");
        free(arr);
        free(newarr);
        return 1;
    }
    for(i=0;i<n;i++)
   {
    printf("%d\t",finalarr[i]);
   }
    printf("\n");
    free(arr);
    free(newarr);

    return 0;
}