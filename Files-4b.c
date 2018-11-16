
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp=fopen("mylog.txt ","w");
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{  	
	      char s[100];
	      int i,f=0;
	      while(1)
	      {
	      	printf("\nEnter sentence:");
	      	gets(s);
	      	for(i=0;i<strlen(s);i++)
	      	{
	      		if(s[i]=='.')
	      		{
	      			f=1;
	      			break;
				  }
			  }
			  if(f==1)
			  break;
			  else
			  fputs(s,fp);
		  }
	      
           fclose(fp);
        
	}
	return 0;
}
