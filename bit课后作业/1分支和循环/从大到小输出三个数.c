#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		int d = a;
		a = b;
		b = d;
	}
	if(a<c)
	{
		int d = a;
		a = c;
		c = d;
	}
	if(b<c)
	{
		int d = b;
		b = c;
		c = d;
	}
	printf("%d%d%d",a,b,c);
	return 0;
}
