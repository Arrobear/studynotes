#include<stdio.h>
//算术转换
// 寻常算术转换：
// long double
// double
// float
// unsigned long int
// long int
// unsigned int
// int
// 
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}

//操作符的属性
// 操作符的优先级
// 操作符的结合性
// 是否控制求值顺序
// 
// // ↓：歧义代码大赏
//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定了计算顺序
//	int c = a + b + 7;//结合性起作用
//
//	return 0;
//}
// 
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//-10
//	// 从左到右先调用函数
//	// 2 - 3 * 4;
//	printf("%d", answer);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);//12
//	printf("%d", ret);
//	return 0;
//}