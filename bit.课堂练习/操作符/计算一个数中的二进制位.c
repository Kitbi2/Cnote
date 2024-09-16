#include<stdio.h>
int main()
{
	int a = 13;
	int b = 1;
	int d = 0;
	while(a)
	{
		if(a&b)
		{
			d++;
		}
		a = a>>1;
	}
	printf("%d",d);
	return 0;
}
