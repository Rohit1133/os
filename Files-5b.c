
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1=fopen("myfile.txt","r");
	FILE *f2=fopen("anotherfile.txt","w");
	if(f1==NULL)
	printf("File doesn't exist\n");
	else
	{
          char c;
          while((c=getc(f1))!=EOF)
          {
          fputc(c,f2);
		  }
           fclose(f1);
           fclose(f2);
        
	}
	return 0;
}
