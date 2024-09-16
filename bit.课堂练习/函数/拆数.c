#include<stdio.h>
int take_apart(int i)
{
	
	if(i)
	{
		take_apart(i/10);
		printf("%d ",i%10); 
	}
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	take_apart(i);
	return 0;
 } 
