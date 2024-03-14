#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* file;																				// ファイルポインタ(読み込み用)
	int c;																					// 読み込む文字
	file = fopen("D:\\Projects\\C\\c-lang\\c-lang_ex22\\sample.txt", "r");	// ファイルを読み込み用にオープン
	if (file == NULL)	// オープンに失敗した場合
	{
		printf("ファイルを開けません。\n");											// エラーメッセージ
		exit(1);																		// 異常終了
	}
	// ファイルのデータを読み込む
	while ((c = fgetc(file)) != EOF)
	{
		printf("%c", (char)c);
	}
	fclose(file);																	// ファイルをクローズ
}