
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1=fopen("myfile.txt","r");
	if(f1==NULL)
	printf("File doesn't exist\n");
	else
	{
          char c;
          int a[10],count=0,i;
          while((c=getc(f1))!=EOF)
          {
          if(c>=48 && c<=57 &&count<10)
          a[count++]=(int)c-48;
		  }
	       if(count<10)
	       printf("only %d  numbers are there in file:",count);
	     
           fclose(f1);
        
        
	}
	return 0;
}
