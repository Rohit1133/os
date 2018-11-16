
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1=fopen("myfile.txt","w");
	
         int i,rn;
         for(i=0;i<10;i++)
         {
         	rn=rand();
         	char s[10];
         	int j=0;
         	while(rn>0)
         	{
         		int r=rn%10;
         		s[j++]=r+48;
         		rn/=10;
			 }
			 fputs(s,f1);
			 fputs(" ",f1);
		 }
           fclose(f1);
        
        
	
	return 0;
}
