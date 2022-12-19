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
    FILE *fptr1,*fptr2;
    char ch;
    
    fptr1 = fopen("welcome1.txt","r");
    fptr2 = fopen("output1.txt","w");
    if((fptr1 != NULL) &&(fptr2 != NULL))
    {
        while((ch=getc(fptr1)) != EOF)
        putc(ch,fptr2);
           
        fclose(fptr1);
        fclose(fptr2);
        printf("檔案拷貝完成!!\n");
    }
    else
        printf("檔案開啟失敗||\n");
    system("pause");
    return 0;
}
