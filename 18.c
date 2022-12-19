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
    FILE *in,*out;
    int cnt;
    char str[100];
    in = fopen("welcome3.txt","r");
    out=fopen("output3.txt","w");
    while(!feof(in))
    {
       cnt=fscanf(in,"%s",str);
       if(cnt>0)
            fprintf(out,"%s\n",str);
    }
    fclose(in);
    fclose(out);
    system("pause");
    return 0;
}
