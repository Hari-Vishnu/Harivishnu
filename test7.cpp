#include<stdio.h>
int main()
{
	int n,m,*p,*q;
	printf("enter the first number:");
	scanf("%d",&n);
	printf("enter the second number:");
	scanf("%d",&m);
	p=&n;
	q=&m;
	if(*p>*q)
	printf("%d is the maximum number",*p);
	else
	printf("%d is the maximum number",*q);
}
