/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX];
    int bytes;
    fptr = fopen("output2.txt","r");
    while(!feof(fptr))
    {
        bytes=fread(str,sizeof(char),MAX-1,fptr);
        str[bytes]='\0';
        printf("%s\n",str);
    }
    fclose(fptr);
    system("pause");
    return 0;
}
