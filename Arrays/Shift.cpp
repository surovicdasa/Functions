#include"Shift.h"
void shiftLeft(int arr[], const int n, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[rows][cols], const int rows, int cols, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[0][0];
		/*for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][cols - 1] = arr[i + 1][0];
		}*/
		for (int i = 0; i < rows * cols; i++)
		{
			arr[0][i] = arr[0][i + 1];
		}
		//arr[rows - 1][cols - 1] = buffer;
		arr[0][rows * cols - 1] = buffer;
	}
}
void shiftLeft(double arr[rows][cols], const int rows, int cols, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		double buffer = arr[0][0];
		/*for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][cols - 1] = arr[i + 1][0];
		}*/
		for (int i = 0; i < rows * cols; i++)
		{
			arr[0][i] = arr[0][i + 1];
		}
		//arr[rows - 1][cols - 1] = buffer;
		arr[0][rows * cols - 1] = buffer;
	}
}
void shiftLeft(char arr[rows][cols], const int rows, int cols, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[0][0];
		/*for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][cols - 1] = arr[i + 1][0];
		}*/
		for (int i = 0; i < rows * cols; i++)
		{
			arr[0][i] = arr[0][i + 1];
		}
		//arr[rows - 1][cols - 1] = buffer;
		arr[0][rows * cols - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(double arr[], const int n, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(int arr[rows][cols], const int rows, const int cols, int raz)
{
	for (int i = 0; i < raz; i++)
	{
		int buffer = arr[rows - 1][cols - 1];
		for (int i = rows - 1; i >= 0; i--)
		{
			for (int j = cols - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][cols - 1];
		}
		arr[0][0] = buffer;
	}
}