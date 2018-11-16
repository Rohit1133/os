
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("myfile.txt","r");
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{
          char c;
          int n=0;//for counting
          while((c=getc(fp))!=EOF)
          {
          	if(c=='$')
          	n++;
		  }
		  printf("no of $ char:%d",n);
           fclose(fp);
        
	}
	return 0;
}
