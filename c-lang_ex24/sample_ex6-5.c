#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* file;
	int i, size;
	// 読み込むデータ
	char* rData;
	// バイナリデータの読み込み
	file = fopen("D:\\Projects\\C\\c-lang\\c-lang_ex24\\btest.bin", "rb");
	if (file == NULL)
	{
		printf("ファイル読み込みに失敗しました。\n");
		exit(1);
	}
	// ファイルの最後までシーク
	fseek(file, 0, SEEK_END);
	// ファイルの大きさを取得
	size = ftell(file);
	// メモリサイズ分、配列を動的生成
	rData = (char*)malloc(sizeof(char) * size);
	// ファイルの最初までポインタを戻す
	fseek(file, 0, SEEK_SET);
	fread(rData, sizeof(char), size, file);
	fclose(file);
	// 結果を表示
	for (i = 0; i < size; i++)
	{
		printf("%x ", rData[i]);
	}
	printf("\n");
	// メモリ解放
	free(rData);
}