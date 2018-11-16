
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int main()
{
	FILE *fp=fopen("test.txt","r");
	char str[MAX];
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{
	  while( fgets(str, MAX, fp)!='\0' )
	    {
		puts(str);
	     }
	fclose(fp);
	}
	return 0;
}
