//函数递归
//函数直接或间接调用自身

#include<stdio.h>

//void print(unsigned int n)
//{
//	if (n > 9)//**满足条件才开始递归
//	{
//		print(n / 10);//**
//	}
//		printf("%d\n", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//%u:无符号整型
//	print(num);
//
//	return 0;
//}

//stack overflow：栈溢出
//内存：
//1、栈区：局部变量、函数形参
//2、堆区：动态内存分配
//3、静态区：全局变量、静态变量
//每一个函数调用，都要在栈区占用一块空间
//每次调用一次函数都要新占一块空间，当栈区满时-->栈溢出

//void text(int n)
//{
//	if (n < 10000)
//	{
//		text(n + 1);
//	}
//}

//写递归时：
//1.不能死递归。必须有跳出条件，每次递归都要逼近跳出条件
//2.递归层次不能太深

//int main()
//{
//
//	text(1);
//	return 0;
//
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//模拟实现strlen函数
//int my_strlen1(char* str) 
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen2(char* str)//不适用临时变量
//{
//	if (*str != '\0') 
//	{
//		return 1+my_strlen2(1 + str);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen2(arr));
//	return 0;
//}
// 
// 求阶乘
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = fac(n);
//	//迭代
//	//for (i = 1; i <= n; i++)//求阶乘
//	//{
//	//	ret = ret * i;
//	//}
//	printf("%d\n", ret);
//	return 0;
//}

//有一些功能：可以使用迭代的方法来实现，也可以使用递归

//求第n个斐波那契数
//int fabnaci(int n)//递归
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fabnaci(n - 1) + fabnaci(n - 2);
//	}
//}
//int fabnaci(int n)//循环
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
// }
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fabnaci(n);
//	printf("%d\n", ret);
//	return 0;
//}

