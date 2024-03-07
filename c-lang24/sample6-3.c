#include <stdio.h>

/* プロトタイプ宣言 */

int max(int, int);
void show(int);
void line();

void main()
{
	int n1 = 4, n2 = 5;
	line();
	show(n1);
	show(n2);
	printf("2つの数のうち、大きい数は、%dです。\n", max(n1, n2));
	line();
}

/// <summary>
/// 2つの整数のうち最大値を求める関数
/// </summary>
/// <param name="a">a</param>
/// <param name="b">b</param>
/// <returns></returns>
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

/// <summary>
/// 数値を表示する関数
/// </summary>
/// <param name="n">表示する数値</param>
void show(int n)
{
	printf("数値：%d\n", n);
	return;
}

/// <summary>
/// 分割線を表示する関数
/// </summary>
void line()
{
	printf("**********\n");
}
