#include<iostream>
#include<string>
using namespace std;

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void FillRand(double arr[], const int n,int minRand=0,int maxRand=100);
void FillRand(char arr[], const int n,int minRand=0,int maxRand=26);


void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void ReversPrint(int arr[], const int n);
void ReversPrint(double arr[], const int n);
void ReversPrint(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void shiftLeft(int arr[], const int n, int raz);
void shiftLeft(double arr[], const int n, int raz);

void shiftRight(int arr[], const int n, int raz);
void shiftRight(double arr[], const int n, int raz);

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

	const int SIZE = 8;
	double brr[SIZE] = {};
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	ReversPrint(brr, SIZE);
	cout << "Sum of elements " << Sum(brr, SIZE) << endl;
	cout << "Avg of elements " << Avg(brr, SIZE) << endl;
	cout << "Minimal value is " << minValueIn(brr, SIZE) << endl;
	cout << "Maximal value is " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	shiftLeft(brr, SIZE, raz);
	Print(brr, SIZE);
	shiftRight(brr, SIZE, raz);
	Print(brr, SIZE);
	
	const int razmer = 5;
	char crr[razmer] = {};
	FillRand(crr, razmer);
	Print(crr, razmer);
	ReversPrint(crr, razmer);
	cout << "Sum of elements " << Sum(crr, razmer) << endl;
	
	


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
		arr[i] = rand()%(maxRand-minRand)+minRand;
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


void ReversPrint(int arr[], const int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversPrint(double arr[], const int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversPrint(char arr[], const int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = strlen(arr);
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	double sr = Sum(arr,n) / n;
	return sr;
}
double Avg(double arr[], const int n)
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

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
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
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
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
