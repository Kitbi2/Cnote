#include<stdio.h>
int main()
{
	
	int n = 1;
	double j = 0;
	int x = 1;
	for(n = 1;n<=100;n++)
	{
		j+= x*1.0/n;
		x = -x;
	}
	printf("%lf",j);
	return 0;
}
