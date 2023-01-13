#include<stdio.h>
int main()
{
	int a,rev,t;
	printf("enter a number:");
	scanf("%d",&a);
	if(a>0)
	{
	printf("reverse of the given number:");
	while (a!=0)
	{
	rev=0;
	t=a%10;
	rev=rev+t;
	a=a/10;
    printf("%d",rev);
}}
    else
    printf("the given number is invalid");

}
