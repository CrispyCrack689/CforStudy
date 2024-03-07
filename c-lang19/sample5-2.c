#include <stdio.h>

void main()
{
	int n[] = { 5,4,3,2,1 };
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("n[%d] = %d ", i, n[i]);
	}
	printf("\n");
}