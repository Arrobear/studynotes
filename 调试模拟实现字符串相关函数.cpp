#include<stdio.h>
#include<assert.h>
#include<string.h>
// 模拟实现strlen
//1.
//size_t my_strlen(const char* arc)
// //size_t=unsigned int:确保返回值不会为负数
//{
//  assert(arc != NULL);
//	int count = 0;
//	int i = 0;
//	while (arc[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
// 2.
//size_t my_strlen(const char* arc)
//{
//  assert(arc != NULL);
//	int i = 0;
//	while (arc[i]!='\0')
//	{
//		i++;
//	}
//	return i;
//}
// 3.
//size_t my_strlen(char* arc)
//{
//	assert(arc != NULL);
//	int count = 0;
//	while (*(arc++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = "hello world!";
//	printf("%d", my_strlen(arr1));
//	return 0;
//} 