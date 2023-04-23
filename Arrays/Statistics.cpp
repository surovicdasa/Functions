#include"Statistics.h"
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[rows][cols], const int rows, const int cols)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(char arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	double sr = Sum(arr, n) / n;
	return sr;
}
double Avg(double arr[], const int n)
{
	double sr = Sum(arr, n) / n;
	return sr;
}
double Avg(char arr[], const int n)
{
	double sr = (double)Sum(arr, n) / n;
	return sr;
}

double Avg(int arr[rows][cols], const int rows, const int cols)
{
	double sr = (double)Sum(arr, rows, cols) / (rows * cols);
	return sr;
}
double Avg(double arr[rows][cols], const int rows, const int cols)
{
	double sr = Sum(arr, rows, cols) / (rows * cols);
	return sr;
}
double Avg(char arr[rows][cols], const int rows, const int cols)
{
	double sr = Sum(arr, rows, cols) / (rows * cols);
	return sr;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int minValueIn(char arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int minValueIn(int arr[rows][cols], const int rows, const int cols)
{
	int min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(double arr[rows][cols], const int rows, const int cols)
{
	double min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
int minValueIn(char arr[rows][cols], const int rows, const int cols)
{
	int min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[rows][cols], const int rows, const int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[rows][cols], const int rows, const int cols)
{
	double max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
int maxValueIn(char arr[rows][cols], const int rows, const int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

