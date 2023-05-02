#include<iostream>
using namespace std;

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void Print(int arr[], const int n);
void ReversPrint(int arr[], const int n);
double Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void Sort(int arr[], const int n);
void shiftLeft(int arr[], const int n, int raz);
void shiftRight(int arr[], const int n, int raz);



int main()
{

	const int n = 5;
	int arr[n];
	FillRand(arr, n,200,100);
	Print(arr, n);
	ReversPrint(arr, n);
	cout << "Summa: " << Sum(arr, n) << endl;
	cout << "Srednee arefmeticheskoye:" << Avg(arr, n) << endl;
	cout << "Minimal value is " << minValueIn(arr, n) << endl;
	cout << "Maximal value is " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	int raz;
	cout << "Enter number of shifts "; cin >> raz;
	shiftLeft(arr, n, raz);
	Print(arr, n);
	shiftRight(arr, n, raz);
	Print(arr, n);

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
		arr[i] = rand()%(maxRand-minRand)+minRand;
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
void ReversPrint(int arr[], const int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
double Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	double sr = Sum(arr,n) / n;
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
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
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
