# 常量and变量：

## What is 常量：

1.用于描述不经常变的量

2.定义常量的方式：字面的常量、const修饰的常变量、#define定于的标识的常量、枚举常量

## What is 变量：

1.用于描述变来变去的量

2.定义变量的方式：数据类型+变量名（变量名不能是关键字，开头不能是数字，由下划线、字符、数字命名）

### 亲兄弟明算账，变量也要分家：分为全局变量和局部变量

1.全局变量：大括号外部定义的变量  

2.局部变量：大括号内部定义的变量 

*这里收一个点：当局部变量和全局变量名字冲突的时候，局部更大sai！*

### 上面说局部和全局变量属实草率，这里说点不同的：

这里先引入一点该概念：

作用域：限定一个名字的可用性的范围叫做作用域

生命周期：是一个名字存活的周期

一个局部变量的作用域只在变量所在的局部范围，全局变量的作用域是一整个工程；

一个局部变量的生命周期是他申请的范围，全局变量是一个工程；



### 









这里再补充点东西：%d--int  %f--float  %lf--double  %ld--long  %c--char