#include <stdio.h>
#include <math.h>

void main()
{
	int n = -2;
	double d1 = -2.5, d2 = 4.0;
	printf("%dの絶対値は%dです\n", n, abs(n));
	printf("%fの絶対値は%fです\n", d1, fabs(d1));
	printf("%fの2乗は%fです\n", d2, pow(d2, 2));
	printf("%fの平方根は%fです\n", d2, sqrt(d2));
}
