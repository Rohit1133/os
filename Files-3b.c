
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("alphabet.txt","w");
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{
		int i;
		for( i=65;i<=90;i++)
		fputc((char)i,fp);
           fclose(fp);
        
	}
	return 0;
}
