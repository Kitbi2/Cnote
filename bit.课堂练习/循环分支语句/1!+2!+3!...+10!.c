#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	int d = 0;
	for(a = 3;a>0;a--)
	{
		for(b = a;b>0;b--)
		{
			c*=b;
		}
		d +=c;
		c = 1;
	}
	printf("%d",d);
	return 0;
}
