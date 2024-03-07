#include <stdio.h>

// 1を用いたループ
void main()
{
	int num;
	printf("負の値で、ループから抜けます。\n");
	while (1)
	{
		printf("数値を入力：");
		scanf("%d", &num);
		if (num < 0)
		{
			// ループから抜ける
			break;
		}
	}
	printf("終了\n");
}