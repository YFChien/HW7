/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX],ch;
    int i=0;
    fptr = fopen("output.txt","a");
    printf("請輸入字串，按ENTER鍵結束輸入:\n");
    while((ch=getch()) != ENTER && i<MAX)
        str[i++]=ch;
    putc('\n',fptr);
    fwrite(str,sizeof(char),i,fptr);
    fclose(fptr);
    printf("\n檔案附加完成!!\n");
    system("pause");
    return 0;
}
