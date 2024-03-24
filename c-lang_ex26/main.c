#include "studentDatabase.h"
#include "dataOutput.h"
#include <stdio.h>

void main()
{
	int i;
	char names[][LENGTH] = { "山田太郎","太田美智子","大山次郎","山口さやか" };
	int ids[] = { 1,2,2,3 };
	initDatabase();
	// データの登録
	for (i = 0; i < 4; i++)
	{
		add(ids[i], names[i]);
		printf("登録:%d,%s\n", ids[i], names[i]);
		showError();
	}
	// 登録したデータの出力
	for (i = 0; i < 3; i++)
	{
		showStudentData(get(i + 1));
	}
}