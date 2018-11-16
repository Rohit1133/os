
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int main()
{
	FILE *fp=fopen("myfile.txt ","r");
	  int i;
	  char a[MAX][MAX],c;	
          i=0;
		  int j=0;
	      while((c=getc(fp))!=EOF)
	      {
	      	if(j==MAX)
	      	{
	      		i++;j=0;
			  }
			  a[i][j++]=c;
		  }
		
		  /*stored data in char array
		    int l,m;
	     for(l=0;l<=i;l++)
	     {
	     	for(m=0;m<=j;m++)
	     	printf("%c",a[l][m]);
	    
		 }
	      */
	      
           fclose(fp);
           FILE *f1=fopen("myfile.txt","w");
	if(fp==NULL)
	printf("File doesn't exist\n");
	else
	{
		int i;
		for( i=65;i<=90;i++)
		fputc((char)i,fp);
           fclose(f1);
        
	}
           
        
	
	return 0;
}
