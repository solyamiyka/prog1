#include <stdio.h>
#include <stdlib.h>

#define MAX 40    // Максимальна розмірність заданих масивів
int main(){

	system("chcp 1251");  // підключення кирилиці
	unsigned int arr1[MAX], arr2[MAX], arr3[MAX], x;
	int k = -1;
	printf("Введіть елементи масивів (0-закінчення введення)");
	for (size_t i = 0; i < MAX; i++)
	{
		printf("arr1[%d]: ", i);
		scanf_s("%u", &x);
		if (x == 0) break;
		arr1[i] = x;
	}
	for (size_t j = 0; j < MAX; j++)
	{
		printf("arr2[%d]: ", j);
		scanf_s("%u", &x);
		if (x == 0) break;
		arr2[j] = x;
	}
	for (size_t i = 0; i < MAX; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			for (size_t j = 0; j < MAX; j++)
			{
				if (arr1[i] == arr2[j]) 
				{
					k++;
					arr3[k] = arr1[i];
				}
			}
		}
	}
	printf("\n Масив 3:");
	for (size_t i = 0; i < k; i++)
	{
		printf("%d\t", arr3[i]);
	}
} 