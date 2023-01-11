#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,n,vol=0;
	printf("enter a string:");
	gets(a);
	n=strlen(a);
	printf("vowels:");
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
		vol++;
		printf("%c ",a[i]);
	}
	}
	printf("\nnumber of vowels in given string is %d",vol);
	
}
