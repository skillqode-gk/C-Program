// Switch case -> NUMBER / CHAR
// continue
// goto
#include<stdio.h>
int main()
{
    int i = 1;
    
    hello:
        if(i<=15){
            printf("%d ",i);
            i++;
            goto hello;
        }
    
}
// pattren , table


/*
    // Switch case
    int a = 20, b = 5, ch;
    printf("1. Addition\n");
    printf("2. Substrction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Addition of a and b is: %d\n",a+b);
            break;
        case 2:
            printf("Substraction of a and b is: %d\n",a-b);
            break;
        case 3:
            printf("Multiplication of a and b is: %d\n",a*b);
            break;
        case 4:
            printf("Division of a and b is: %d\n",a/b);
            break;
        default:
            printf("Wrong choice....\n");
            break;

    }

    // continue
    for (int i = 1; i <= 15; i++)
    {
        if(i==5 || i == 12){
            continue;
        }
        printf("%d ",i);
    }
*/