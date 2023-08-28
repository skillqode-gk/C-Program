#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w+");
    // fp = fopen("D:/Girish Sir/Data Stucture/abc.txt","w+");
    fprintf(fp,"Welcome to skill qode, Decode your skill hear..\n");
    fputs("Your are entering learning c language now..\n",fp);
    fputs("We are enjoying every thing..\n",fp);
    fclose(fp);
}

/*
    r - Open a text file to read mode
    w - Open a text file to write mode
    a - Open a text file to append mode
*/