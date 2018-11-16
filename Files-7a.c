
#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("Enter text( '.' to stop):");
char c;
while((c=getc(stdin))!='.')
putc(c,stdout);
	return 0;
}
