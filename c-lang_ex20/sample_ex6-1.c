#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* file;																				// ファイルポインタ(出力用)
	file = fopen("D:\\Projects\\C\\c-lang\\c-lang_ex20\\sample.txt", "w");	// ファイルを書き込み用にオープン
	if (file == NULL)	// オープンに失敗した場合
	{
		printf("ファイルを開けません。\n");											// エラーメッセージ
		exit(1);																		// 異常終了
	}
	// ファイルにデータを書き込む
	fprintf(file, "Hello, World!\r\n");										// ファイルに書く
	fprintf(file, "ABCDEF\r\n");
	fprintf(file, "あいうえお\r\n");
	fclose(file);																	// ファイルをクローズ
}