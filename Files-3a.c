
#include<stdio.h>
#include<stdlib.h>
int main()
{  
	FILE *fp=fopen("myfile.txt","r");
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{
		char str[100];
       fgets(str,100,fp);
       puts(str);
           fclose(fp);
        
	}
	return 0;
}
