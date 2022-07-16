#include<iostream>

#define TERMINAL_VALUE -1
struct RaggedArray
{
	int** data = NULL;
	int rows = 0;
};

int main()
{
	RaggedArray mas;

	scanf_s("%i", &mas.rows);
	mas.data = (int**)malloc(sizeof(int*) * mas.rows);
	
	for (int i = 0; i < mas.rows; i++)
	{
		int cols;
		scanf_s("%i", &cols);
		mas.data[i] = (int*)malloc(sizeof(int) * (cols+1));
		for (int j = 0; j < cols; j++)
			mas.data[i][j] = 0;
		mas.data[i][cols] = TERMINAL_VALUE;
	}

	for (int i = 0; i < mas.rows; i++)
		for (int j = 0; mas.data[i][j] != TERMINAL_VALUE; j++)
			mas.data[i][j] = rand() % 100;

	for (int i = 0; i < mas.rows; i++)
	{
		for (int j = 0; mas.data[i][j] != TERMINAL_VALUE; j++)
			printf("%3i ", mas.data[i][j]);
		printf("\n");
	}

	for (int i = 0; i < mas.rows; i++)
		free(mas.data[i]);
	free(mas.data);

	system("pause");
	return 0;
}