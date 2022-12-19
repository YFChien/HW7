/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;
    char ch;
    int count=0;
    
    fptr = fopen("welcome.txt","r");
    if(fptr != NULL)
    {
        while((ch=getc(fptr)) != EOF)
        {
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
        printf("\n總共有%d個字元\n",count);
    }
    else
        printf("檔案開啟失敗||\n");
    system("pause");
    return 0;
}
