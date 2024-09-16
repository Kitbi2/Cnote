#include<stdio.h>
int main()
{
	int arr1[4] = {1,2,3,4};
	int arr2[4] = {2,3,4,5};
	int arr3[4] = {3,4,5,6};
	int *parr[3] = {arr1,arr2,arr3};
	int i = 0;
	int j = 0;
	for(i = 0;i<3;i++)
	{ 
		for( j = 0;j<4;j++)
		{
			printf("%d",(*(*parr+j)+i));
		}
		printf("\n");
	}
	return 0;
 } 
//parr是首元素的地址，对它进行加以就会指向下一个元素，对他进行解析得到的是第一个元素，我们的第一个元素的是一个数组的首地址，对第一个元素进行加1就是
//数组的首地址进行加一，也就会指向该
