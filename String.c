/*
string -> collection of char
last char -> NULL char('\0')
    strlen() -> length count
    strrev() -> reverse string
    strcon() -> merge string
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    
    printf("Enter string 1: ");
    // scanf("%s",&str);   // space not allowed
    // scanf("%[^\n]s",&str);   // space allowed
    gets(a);

    printf("Enter string 2 : ");
    gets(b);
    
    printf("Your string is: %s", strcat(a,b));
    // puts(str);

    // length
    // int i=0;
    // while(str[i] != '\0'){
    //     i++;
    // }
    // printf("\nString length is: %d",i);
    // printf("\n\n\nYour String length is: %d",strlen(str));
}


// HARMI => H I A M R