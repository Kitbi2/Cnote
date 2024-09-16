#include<stdio.h>
int factorial(int i)
{
	if(i)
		return i*factorial(i-1);
	else 
		return 1;
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	printf("%d",factorial(i));
	
	return 0;
}
