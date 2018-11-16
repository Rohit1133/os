
#include<stdio.h>
#include<stdlib.h>
int main()
{  
	FILE *fp=fopen("test.txt","r");
	char c;
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{
		while((c=getc(fp))!=EOF)
		{
			if(c=='b')
			putchar(c);
		}
		fclose(fp);
	}
	return 0;
}
