#include "stdafx.h"
void Sort(int *Num, int T)
{
	int sbv;											// Blank variable declare

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (Num[i] > Num[j])						// Sorting Num matrix
			{
				sbv = Num[j];
				Num[j] = Num[i];
				Num[i] = sbv;
			}
		}
	}
}

int main()
{
	int *Num = (int *)malloc(sizeof(int) * 10000);		// Num matrix declare
	int T;												// Test case declare

	setbuf(stdout, NULL);
	scanf_s("%d", &T);									// Total Num size declare
	for (int i = 0; i < T; i++)
		scanf_s("%d", &Num[i]);							// Num matrix size construct

	Sort(Num, T);										// Num Sorting Function

	for (int i = 0; i < T; i++)
		printf("%d ", Num[i]);							// Sort Confirm
	printf("\n");

	return 0;
}