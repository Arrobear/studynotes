#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//i的地址会比arr地址更高
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;//越界访问
//		
//		printf("hello\n");
//	}
//	return 0;
//}
// i和arr是局部变量
// 局部变量是放在栈区的
// 栈区的使用习惯是：先使用高地址，再使用低地址
// (数组随着下标的增长，地址是由低到高变化的)
// Debug版本会死循环报错，但是Release会对代码做优化
//

//数据类型介绍
//类型的意义：
//1.使用这个类型开辟内存空间的大小（大小决定了使用范围）
//2.如何看待内存空间的视角
// 类型的基本归类：
// 整形家族:
// char 
// unsigned char
// signed char
// short
// unsigned short
// signed short
// int 
// unsigned int
// signed int
// long
// unsigned long
// signed long
// 
// 浮点数家族：
// float
// double
// 
// 构造类型-自定义类型
// 数组
// 枚举
// 联合体
// struct:结构体类型
//  
// 指针类型
// 
// 空类型：void
// （函数的返回类型，函数参数，指针）
//int main()
//{
//	int arr1[10];//int [10]
//	int arr2[5];//int [5]
//
//	return 0;
//}
// 
//int main()
//{
//	int a = -10;
//
//	return 0;
//}
// 

// 大端字节序
// 小端字节序
//int main()
//{
//	int a = 0x11223344;
//	//11是高位地址，44是地位地址
//	//11223344:大端字节序：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处
//	//11223344:小端字节序：把数据的高位字节序的内容存放在高地址处，地位字节序的内容存放在低地址处
//
//	return 0;
//}
