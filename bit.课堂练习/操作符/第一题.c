#include<stdio.h>
void reverse(int arr[],int sz)
{
	int i = 0;
	while(i<sz)
	{
		int tmp = arr[i];
		arr[i] = arr[sz-1];
		arr[sz-1] = tmp;
		i++;
		sz--;
	}	
}
void init(int arr[10],int sz)
{
	int i = 0;
	for(i = 0;i<sz;i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,sz);
	//init(arr,sz);
	print(arr,sz);
	return 0;
 } 
