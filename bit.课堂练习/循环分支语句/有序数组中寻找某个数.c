#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int number = 7;
	int i = 0;
	int j = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i = 0;i<size;i++)
	{
		if(arr[i] == number)
		{
			printf("%d",i);
		}
	 } 
	return 0;
}

