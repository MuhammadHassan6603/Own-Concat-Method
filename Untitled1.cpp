#include<stdio.h>
#include<string.h>
void strcat(char *d,char *s)
{
	for(;*d!='\0';d++)
	{
		
	}
	for(;*s!='\0';s++)
	{
		*d=*s;
		d++;
	}
	*d='\0';
}
int main()
{
	char ch1[10] ={'h','e','l','l','o','\0'};
	char ch2[10] ="C";
	strcat(ch1,ch2);
	printf("%s",ch1);
}
