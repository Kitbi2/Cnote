#include<stdio.h>
int Fibonacci (int i)
{
	if(i<=2)
		return 1;
	else 
		return Fibonacci(i-1) +Fibonacci(i-2); 
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	printf("%d",Fibonacci(i));
	return 0;
}
