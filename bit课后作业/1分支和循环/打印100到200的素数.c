#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;

	for(a = 100;a<=200;a++)
	{
		int b = 0;
		int d = 0;
		for(b = 2;b<a;b++)
		{
			if(a%b == 0)
			{
				d = 1;
				break;
			}	
		}
		if(d == 0)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}
