
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("mylog.txt","a");
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{  	char str[100];
		printf("Enter any string:");
	   gets(str);
	   fputs(str,fp);
	   fputs("\n",fp);
           fclose(fp);
        
	}
	return 0;
}
