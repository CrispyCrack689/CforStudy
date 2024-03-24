#include "studentDatabase.h"
#include <string.h>

#define MESSAGE_LENGTH 256

// データベースに登録されている学生の数
static int num = 0;
// 学生のデータベース
static student student_database[MAX_STUDENT];
// エラーメッセージ
int error = MESSAGE_OK;

// データベースの初期化
void initDatabase()
{
	int i;
	for (i = 0; i < MAX_STUDENT; i++)
	{
		student_database[i].id = -1;
		strcpy(student_database[i].name, "");
	}
	error = MESSAGE_OK;	// エラーメッセージのクリア
	num = 0;			// 登録された学生の数を0に初期化
}

// データベースへのデータの登録(学生番号、名前)
int add(int id, char* name)
{
	// すでに登録されているidであれば、登録しない
	if (get(id) == NULL && num < MAX_STUDENT)
	{
		student_database[num].id = id;
		strcpy(student_database[num].name, name);
		num++;
		error = MESSAGE_OK;
		return 1;	// 登録できたら、1を返す
	}
	error = MESSAGE_ERROR;
	return 0;		// 登録できなければ、0を返す
}

// 学生のデータの取得
student* get(int id)
{
	int i;
	for (i = 0; i < num; i++)
	{
		// 該当するidのデータが見つかったら
		// ポインタを返す
		if (student_database[i].id == id)
		{
			return &student_database[i];
		}
	}
	return NULL;
}