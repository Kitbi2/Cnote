# c循环语句：while、do while、for

## 一、while循环：

#### 1.这玩意和if差不多基本的语法结构如下：

```c
while(条件)
	语句;
```

#### 只不过是if是满足条件就执行一次，while是不断执行直到条件不满足

```c
#include<stdio.h>
int main()
{
	if(1)
	printf("hh");
	return 0;
}
#include<stdio.h>
int main()
{
	while(1)
	printf("hh");
	return 0;
}
//对比一下俩个代码，体悟一下俩这的区别；
```

#### 2.同样的while语句后面没有大括号的情况下只会执行后面的第一条语句，要执行多条语句就需要大括号括起来

### 3.对于一个循环语句，记得找循环语句要有改变条件变量跳出循环的语句

```c
int a = 0;
while(a<=10)
{
	printf("hh");
	a++;//这条就是能改变条件变量跳出循环的语句
}
```

### break和continue关键字在循环语句的作用：

#### 1.break是直接跳出循环

#### 2.continue是结束本轮循环执行下一轮循环

```c
#include<stdio.h>
int main()
{
	int a = 0;
	while(a<=10)
	{
        if(a == 5)
        	break;
		printf("hh");
		a++;
		
	}
}
#include<stdio.h>
int main()
{
	int a = 0;
	while(a<=10)
	{
		
		if(a == 5)
       		continue;
        printf("hh");
		a++;
	}
}
//感受一下俩个代码区别，想想为什么会出现这种效果
```

做个练习先：

##### 1.描述一下下面代码是怎么运行的

```c
#include<stdio.h>
int main()
{
	int ch = 0;
	while((ch = getchar()) = !EOF)
		putchar(ch);
	return 0;
}//getchar函数的意思是读取一个字符，putchar的意思是输出字符。getchar函数在读取结束或者读取错误时候会放回EOF;EOF是文件的结束标志。

```

### 说个知识：

### 1.就是键盘到程序之间有一个缓冲区，键盘输入在缓冲区，程序从缓冲区中读取数据

### 2.上面那串代码还具有清空缓冲区的作用





## 二、for循环：

### 1.基本语法结构：

```c
for(表达式1;表达式2;表达式3;)
{
	
}
```

### 第一个表达式时初始化的作用，该表达式只有在最开始的时候执行一次

### 第二个是判断部分，每次进入for循环都会进行判断。

### 第三个是调整部分，循环里面的语句执行完之后再执行调整部分

```c
#include<stdio.h>
int main()
{
	int a = 0;
	return 0;
	for(a = 0;a<=10;a++)
	{
		printf("%d ",a);
	}
	return 0;
}//感受一下这串代码
```

### 2.break和continue俩这再for循环的作用：

#### break的作用和再while循环中的作用差不多不在进行描述

#### continue的作用就不一样了，重点哈，虽然是跳过本轮循环，但是是跳到调整部分区执行

## 注：用for循环的时候尽量不要再循环中改变条件变量

### 3.for循环的变种：

#### 1.for循环中的三个表达式都可以省略的，判断表达式省略表示永为真

```c
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for(a = 0;a<3;a++)
	{
		for(b = 0;b<3;b++)
		{
			printf("hh");
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for(;a<3;a++)
	{
		for(;b<3;b++)
		{
			printf("hh");
		}
	}
	return 0;
}//想想这两串代码的效果是否一样，如如果不一样，为什么呢
```

# 注：嵌套式循环不详见，这东西主要是逻辑的问题

做个练习先：

1.循环执行几次

```c
#include<stdio.h>
int main()
{
    int i = 0;
    int k = 0;
    for(i = 0,k = 0;k = 0;i++,k++)
        k++;
	return 0;
}//
```

## 三、do while 循环：

#### 语法结构：

```c
do
{
	语句;
}while(条件)
```

### break和continue在do while循环中：

#### 1.和while一样不讲了

### 这东西和while基本上没什么区别，唯一的区别就是进入循环前执行一次循环里面的语句





总练习：

1.计算n的阶乘

2.计算1！+2！+....+10!

3.在一个有序列数组中查找某一个数（尝试用二分查找法谢谢看）

4.多字符从两端移动；
