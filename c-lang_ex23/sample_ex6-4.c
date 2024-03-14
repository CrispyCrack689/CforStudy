#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* file;
	int i;
	// 書き込むデータ
	char wData[] = { 0x10,0x1a,0x1e,0x1f };
	char rData[4];
	// バイナリデータの書き込み
	file = fopen("D:\\Projects\\C\\c-lang\\c-lang_ex23\\btest.bin", "wb");	// ファイルをオープン
	if (file == NULL)
	{
		printf("バイナリ書き込みに失敗しました。\n");
		exit(1);
	}
	fwrite(wData, sizeof(char), sizeof(wData), file);	// バイナリデータを書き込む
	fclose(file);																	// ファイルをクローズ
	// バイナリデータの読み込み
	file = fopen("D:\\Projects\\C\\c-lang\\c-lang_ex23\\btest.bin", "rb");	// ファイルをオープン
	if (file == NULL)
	{
		printf("バイナリ読み込みに失敗しました。\n");
		exit(1);
	}
	fread(rData, sizeof(char), sizeof(rData), file);	// バイナリデータを読み込む
	fclose(file);																	// ファイルをクローズ
	// 結果を表示
	for (i = 0; i < sizeof(rData); i++)
	{
		printf("%x ", rData[i]);
	}
	printf("\n");
}