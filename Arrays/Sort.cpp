#include"Sort.h"
void Sort(int arr[], const int n)

{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			arr[i];//выбранный элемент
			arr[j];//перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			arr[i];//выбранный элемент
			arr[j];//перебираемый элемент
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			arr[i];//выбранный элемент
			arr[j];//перебираемый элемент
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[rows][cols], const int rows, const int cols)
{
	for (int k = 0; k < rows; k++)
	{
		for (int l = 0; l < cols; l++)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					arr[k][l];//выбранный элемент
					arr[i][j];//перебираемый элемент
					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[rows][cols], const int rows, const int cols)
{
	for (int k = 0; k < rows; k++)
	{
		for (int l = 0; l < cols; l++)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					arr[k][l];//выбранный элемент
					arr[i][j];//перебираемый элемент
					if (arr[i][j] > arr[k][l])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[rows][cols], const int rows, const int cols)
{
	for (int k = 0; k < rows; k++)
	{
		for (int l = 0; l < cols; l++)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					arr[k][l];//выбранный элемент
					arr[i][j];//перебираемый элемент
					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
