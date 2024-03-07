#include <stdio.h>

void main()
{
	char s1[4] = { 'a','b','c','\0' };	// 文字列"abc"
	char s2[] = "Hello World";			// 文字列"Hello World"
	char s3[10];						// 最大10文字まで入る文字列

	printf("文字列を入力してください：");
	scanf("%s", s3);				// 文字列を入力
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("s3 = %s\n", s3);
}