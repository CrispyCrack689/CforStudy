#include "calc.h"

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
