#include<stdio.h>
int get_leap_year(int year)
{
	if((year%4 == 0&& year%100 != 0)||year%400 == 0)
	return 1;
	else 
	return 0;
}
int main()
{
	int year;
	scanf("%d",&year);
	int i = get_leap_year(year);
	if(i)
	printf("是闰年");
	else 
	printf("不是闰年");
	return 0;
}
