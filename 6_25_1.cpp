#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// int main()
//{
//    //操作符
//    //
//    // 算术操作符：+，-，*，/，%
//    //float a = 9 / 2.0;
//    //printf("%f\n", a);
//    //int a = 2;
//    //int b = a << 1;//b=4=100(二进制)
//    // 移位操作符：>>  <<:移动的是二进制位
//    // 
//    // 位操作符：
//    // &：按位与
//    // |：按位或
//    // ^：按位异或
//    // 
//    // 赋值操作符：=，+=，-=，/=，&=，^=，|=，>>=，<<=, %=
//    // 
//    // 单目操作符：！，-，+，&，sizeof，~，--，++，*，（类型）
//    // ↑：只有一个操作数
//    // //0表示假，非0表示真
//    // int a=10;
//    // !a;//!a=0
//    // if(a)//if(!a)
//    // {
//    // //若果a为真(假)，则
//    // }
//    // sizeof 在后面为变量时后面的括号可以省略（表示不是函数）
//    // ~：对一个数的所有二进制按位取反1->0,0->1
//    // a=0;:00000000000000000000000000000000
//    // ~a=-1;:11111111111111111111111111111111
//    // 整数在内存中存的是补码
//    //一个整数的二进制表示有3种：
//    // -1：(负数的计算)
//    // 原码：10000000000000000000000000000001
//    // 反码：11111111111111111111111111111110（原码符号位不变）
//    // 补码：11111111111111111111111111111111（内存中存取的，反码+1）
//    // 正数：原码反码补码相同
//    // 
//    // 强制类型转换：
//    // int a=(int)3.14;
//    // 
//    // 逻辑操作符：&&，||：逻辑与，逻辑或
//    // 
//    // 条件操作符（三目操作符）：？:
//    // exp1?exp2:exp3
//    // exp1如果成立，exp2计算，整个表达式的结构是：exp2的结果
//    // exp1如果不成立，exp3计算，整个表达式的结构是：exp3的结果
//    // int a=0,b=3,max=0;
//    // max=a>b?a:b;
//    // 
//    // 逗号表达式：逗号隔开的一串表达式
//    // (2,4,+5,6)；
//    // 从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//    // 
//    // 下标引用、函数调用、结构成员：[],(),.,->
//
//    return 0;
//}

// 常见关键字：
// auto		break	case	char	const	continue	default		do		double	
// else		enum	extern	float	for		goto	if	int		long	register	return	
// short	signed		sizeof	static		struct		switch	 typedef	union	unsigned
// void		volatile	while
//
// auto:是自动的 - 每个局部变量都是自动修饰的
// {
// int a=10;//局部变量，自动创建，自动销毁，自动变量
// }//auto 被省略掉了
// 
// default：默认
// enum：枚举
// extern：用来声明外部符号
// register：寄存器关键字
// {
// register int num=100;//建议num的值存放在寄存器中
// }
// signed：有符号的：10，-20
// unsigned：无符号的
// static：静态的
// typerdef：类型定义
// union：共用体/联合体
// volatile：
// 

//typedef unsigned int u_int//typedef：类型定义（类型重命名）
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

// static - 静态的
// 1. static 修饰局部变量:改变了局部变量的生命周期（本质上是改变了变量的存储类型）
// 2. static 修饰全局变量：全局变量具有外部链接属性，被static修饰后，变成内部连接属性，其他源文件不能使用这个变量
// 3. static 修饰函数：函数只能在自己所在的源文件内部使用，与修饰全局变量同理
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//		while (i < 10)
//		{
//			test();
//			i++;
//		}
//	return 0;
//}

////声明
////extern：声明外部符号
//extern int g_val;
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//}
////全局变量具有外部链接属性
////被static修饰后，变成内部连接属性，其他源文件不能使用这个变量

//extern int Add(int, int);
//int main()
//{
//	int a = 10, b = 20, sum = Add(a, b);
//	return 0;
//}