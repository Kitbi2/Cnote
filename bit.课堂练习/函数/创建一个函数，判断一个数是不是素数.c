#include<stdio.h>
int get_prime_number(int a)
{
	int i = 0;
	for(i = 2;i<a;i++)
	{
		if(a%i == 0)
		return 0;
	}
	return 1;
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	int b = get_prime_number(a);
	if(b == 1)
		printf("是素数"); 
	else 
		printf("不是素数");
	return 0;
 } 
