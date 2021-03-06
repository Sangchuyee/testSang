#include "stdafx.h"
void Sort(int *Num, int T)
{
	int sbv;														// Blank variable declare

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			if (Num[i] > Num[j]) {									// Sorting Num matrix
				sbv = Num[j];
				Num[j] = Num[i];
				Num[i] = sbv;
			}
		}
	}
}

int *Calculate(int *Num, int T)
{
	int odd_sum = 0;
	int even_sum = 0;												// odd, even declare
	int Sum[2];														// odd, even save matrix declare

	for (int i = 0; i < T; i++)
		(i % 2 == 1) ? (even_sum += Num[i]) : (odd_sum += Num[i]);	// Conditional operator

	Sum[0] = odd_sum;
	Sum[1] = even_sum;

	return Sum;
}

int *ITOA(int num)
{
	int digit[10] = { 0, };

	for (int i = 0; num > 0; i++) {
		digit[(num % 10)]++;
		num /= 10;
	}

	return digit;
}

int main()
{
	int *Num = (int *)malloc(sizeof(int) * 10000);					// Num matrix declare
	int T;															// Test case declare
	int C_odd, C_even;												// Calculate variable declare
	int R_num;														// Final Result Num
	int D_num[10];													// Digit Num

	setbuf(stdout, NULL);
	printf("Total Num size is ");
	scanf_s("%d", &T);												// Total Num size declare

	for (int i = 0; i < T; i++)
		scanf_s("%d", &Num[i]);										// Num matrix size construct

	Sort(Num, T);													// Num Sorting Function

	printf("\nMatrix Sorting...\n");
	for (int i = 0; i < T; i++)
		printf("%d ", Num[i]);										// Sort Confirm
	printf("\n");

	C_odd = *Calculate(Num, T);
	C_even = *(Calculate(Num, T) + 1);								// Calculate Function

	printf("\nOdd Sum : %d\nEven Sum : %d\n", C_odd, C_even);		// Calculate Confirm

	R_num = C_odd * C_even;
	printf("\nOdd multiplication Even is %d\n", R_num);

	printf("\nMultiple Num digit\n", R_num);

	for (int i = 0; i < 10; i++) 
		if(*(ITOA(R_num) + i))										// Digit Matrix true construction
			printf("[%d Count : %d\n]",i ,*(ITOA(R_num) + i));

	return 0;
}