#include<iostream>
#include<string>
using namespace std;
#define delimiter "-----------------------------------------"


const int rows = 3;
const int cols = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 26);
void FillRand(int arr[rows][cols], const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(double arr[rows][cols], const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(char arr[rows][cols], const int rows, const int cols, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[rows][cols], const int rows, const int cols);
void Print(double arr[rows][cols], const int rows, const int cols);
void Print(char arr[rows][cols], const int rows, const int cols);

void ReversPrint(int arr[], const int n);
void ReversPrint(double arr[], const int n);
void ReversPrint(char arr[], const int n);
void ReversPrint(int arr[rows][cols], const int rows, const int cols);
void ReversPrint(double arr[rows][cols], const int rows, const int cols);
void ReversPrint(char arr[rows][cols], const int rows, const int cols);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[rows][cols], const int rows, const int cols);
double Sum(double arr[rows][cols], const int rows, const int cols);
double Sum(char arr[rows][cols], const int rows, const int cols);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[rows][cols], const int rows, const int cols);
double Avg(double arr[rows][cols], const int rows, const int cols);
double Avg(char arr[rows][cols], const int rows, const int cols);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(char arr[], const int n);
int minValueIn(int arr[rows][cols], const int rows, const int cols);
double minValueIn(double arr[rows][cols], const int rows, const int cols);
int minValueIn(char arr[rows][cols], const int rows, const int cols);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(char arr[], const int n);
int maxValueIn(int arr[rows][cols], const int rows, const int cols);
double maxValueIn(double arr[rows][cols], const int rows, const int cols);
int maxValueIn(char arr[rows][cols], const int rows, const int cols);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[rows][cols], const int rows, const int cols);
void Sort(double arr[rows][cols], const int rows, const int cols);
void Sort(char arr[rows][cols], const int rows, const int cols);

void shiftLeft(int arr[], const int n, int raz);
void shiftLeft(double arr[], const int n, int raz);
void shiftLeft(char arr[], const int n, int raz);
void shiftLeft(int arr[rows][cols], const int rows, const int cols, int raz);
void shiftLeft(double arr[rows][cols], const int rows, const int cols, int raz);
void shiftLeft(char arr[rows][cols], const int rows, const int cols, int raz);

void shiftRight(int arr[], const int n, int raz);
void shiftRight(double arr[], const int n, int raz);
void shiftRight(char arr[], const int n, int raz);
void shiftRight(int arr[rows][cols], const int rows, const int cols, int raz);

int main()
{
	const int n = 5;
	int i_arr[n];

	FillRand(i_arr, n, 200, 100);
	Print(i_arr, n);
	ReversPrint(i_arr, n);
	cout << "Summa: " << Sum(i_arr, n) << endl;
	cout << "Srednee arefmeticheskoye:" << Avg(i_arr, n) << endl;
	cout << "Minimal value is " << minValueIn(i_arr, n) << endl;
	cout << "Maximal value is " << maxValueIn(i_arr, n) << endl;
	Sort(i_arr, n);
	Print(i_arr, n);
	int raz;
	cout << "Enter number of shifts "; cin >> raz;
	shiftLeft(i_arr, n, raz);
	Print(i_arr, n);
	shiftRight(i_arr, n, raz);
	Print(i_arr, n);

	const int SIZE = 8;
	double d_arr[SIZE] = {};
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	ReversPrint(d_arr, SIZE);
	cout << "Sum of elements " << Sum(d_arr, SIZE) << endl;
	cout << "Avg of elements " << Avg(d_arr, SIZE) << endl;
	cout << "Minimal value is " << minValueIn(d_arr, SIZE) << endl;
	cout << "Maximal value is " << maxValueIn(d_arr, SIZE) << endl;
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);
	shiftLeft(d_arr, SIZE, raz);
	Print(d_arr, SIZE);
	shiftRight(d_arr, SIZE, raz);
	Print(d_arr, SIZE);

	const int razmer = 10;
	char c_arr[razmer] = {};
	FillRand(c_arr, razmer);
	Print(c_arr, razmer);
	ReversPrint(c_arr, razmer);
	cout << "Sum of elements " << Sum(c_arr, razmer) << endl;
	cout << "Avg of elements " << Avg(c_arr, razmer) << endl;
	cout << "Minimal value is " << minValueIn(c_arr, razmer) << endl;
	cout << "Maximal value is " << maxValueIn(c_arr, razmer) << endl;
	Sort(c_arr, razmer);
	Print(c_arr, razmer);
	shiftLeft(c_arr, razmer, raz);
	Print(c_arr, razmer);
	shiftRight(c_arr, razmer, raz);
	Print(c_arr, razmer);

	int i_arr_2[rows][cols];
	FillRand(i_arr_2, rows, cols);
	Print(i_arr_2, rows, cols);
	ReversPrint(i_arr_2, rows, cols);
	cout << "Sum of elements " << Sum(i_arr_2, rows, cols) << endl;
	cout << "Avg of elements " << Avg(i_arr_2, rows, cols) << endl;
	cout << "Maximal value is " << maxValueIn(i_arr_2, rows, cols) << endl;
	cout << "Minimal value is " << minValueIn(i_arr_2, rows, cols) << endl;
	Sort(i_arr_2, rows, cols);
	Print(i_arr_2, rows, cols);
	shiftLeft(i_arr_2, rows, cols, raz);
	Print(i_arr_2, rows, cols);
	shiftRight(i_arr_2, rows, cols, raz);
	Print(i_arr_2, rows, cols);

	double d_arr_2[rows][cols];
	FillRand(d_arr_2, rows, cols);
	Print(d_arr_2, rows, cols);
	ReversPrint(d_arr_2, rows, cols);
	cout << "Sum of elements " << Sum(d_arr_2, rows, cols) << endl;
	cout << "Avg of elements " << Avg(d_arr_2, rows, cols) << endl;
	cout << "Minimum value is " << minValueIn(d_arr_2, rows, cols) << endl;
	cout << "Maximal value is " << maxValueIn(d_arr_2, rows, cols) << endl;
	Sort(d_arr_2, rows, cols);
	Print(d_arr_2, rows, cols);
	shiftLeft(d_arr_2, rows, cols, raz);
	Print(d_arr_2, rows, cols);

	char c_arr_2[rows][cols];
	FillRand(c_arr_2, rows, cols);
	Print(c_arr_2, rows, cols);
	ReversPrint(c_arr_2, rows, cols);
	cout << "Sum of elements " << Sum(c_arr_2, rows, cols) << endl;
	cout << "Avg of elements " << Avg(c_arr_2, rows, cols) << endl;
	cout << "Minimum value is " << minValueIn(c_arr_2, rows, cols) << endl;
	cout << "Maximal value is " << maxValueIn(c_arr_2, rows, cols) << endl;
	Sort(c_arr_2, rows, cols);
	Print(c_arr_2, rows, cols);
	shiftLeft(c_arr_2, rows, cols, raz);
	Print(c_arr_2, rows, cols);
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (minRand == maxRand)
	{
		cout << "Zero range" << endl;
		return;
	}
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (minRand == maxRand)
	{
		cout << "Zero range" << endl;
		return;
	}
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	if (minRand == maxRand)
	{
		cout << "Zero range" << endl;
		return;
	}
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{

		arr[i] = 'a' + rand() % ('z' - 'a');

	}
}
void FillRand(int arr[rows][cols], const int rows, const int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(double arr[rows][cols], const int rows, const int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[rows][cols], const int rows, const int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = 'a' + rand() % ('z' - 'a');
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimiter;
	cout << endl;
}
void Print(double arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimiter;
	cout << endl;
}
void Print(char arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimiter;
	cout << endl;
}
void ReversPrint(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversPrint(double arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversPrint(char arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversPrint(int arr[rows][cols], const int rows, const int cols)
{
	for (int i = rows - 1; i >= 0; i--)
	{
		for (int j = cols - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void ReversPrint(double arr[rows][cols], const int rows, const int cols)
{
	for (int i = rows - 1; i >= 0; i--)
	{
		for (int j = cols - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void ReversPrint(char arr[rows][cols], const int rows, const int cols)
{
	for (int i = rows - 1; i >= 0; i--)
	{
		for (int j = cols - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
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