#include <stdio.h>

void swap(int*, int*);

void main()
{
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

/// <summary>
/// 変数の値の入れ替えを行う関数
/// </summary>
/// <param name="num1">入れ替え1</param>
/// <param name="num2">入れ替え2</param>
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}