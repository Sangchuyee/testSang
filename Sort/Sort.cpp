#include "stdafx.h"

int main()
{
	int *Num = (int *)malloc(sizeof(int) * 10000);		// Num matrix declare
	int T;												// Test case declare

	setbuf(stdout, NULL);
	scanf_s("%d", &T);									// Total Num size declare
	for (int i = 0; i < T; i++)
		scanf_s("%d", &Num[i]);							// Num matrix size construct

	return 0;
}