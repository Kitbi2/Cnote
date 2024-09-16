#include<stdio.h>
int main()
{
	int arr[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
	int (*parr)[4] =arr;
	int i = 0;
	int j = 0;
	for(i = 0;i<4;i++)
	{
		for(j = 0;j<4;j++)
		{
			printf("%d ",*parr[j]+i);
		}
		printf("\n");
	}		
	return 0;
 } 
//这是一个数组指针，解释一下什么是数组指针， 
 
