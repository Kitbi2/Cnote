#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	int b = 1;
	
	while(a)
	{
		b*=a;
		a--;
	}
	printf("%d",b);
	return 0;
}
