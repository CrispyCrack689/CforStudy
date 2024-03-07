#include <stdio.h>

/// <summary>
/// 平均値を求める関数の定義
/// </summary>
/// <param name="l">引数l</param>
/// <param name="m">引数m</param>
/// <returns>l,mの平均値</returns>
double avg(double l, double m)
{
	// 引数l,mの平均値を求め、rに代入する
	double r = (l + m) / 2.0;
	return r;
}

void main()
{
	double d1, d2, d3, d4;
	double a = 1.2, b = 3.4, c = 2.7;
	// 同じ計算が3回(関数を呼び出して計算)
	d1 = avg(a, b);
	d2 = avg(4.1, 5.7);
	d3 = avg(c, 2.8);
	d4 = avg(2.0, 8.0);
	printf("d1 = %f,d2 = %f,d3 = %f,d4 = %f\n", d1, d2, d3, d4);
}
