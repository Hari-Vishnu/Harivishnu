#include<stdio.h>
int main()
{
	int a,t,i,b=0;
	printf("enter a three digit number:");
	scanf("%d",&a);
	t=a;
	if(a>99&&a<1000)
	{
	while(a!=0)
	{
		i=a%10;
		b=b+i*i*i;
		a=a/10;
	}
	if(b==t)
	printf("the given number is a amstrong number");
	else
	printf("the given number is not a amstrong number");
}
else
printf("the given number is invalid");
}
