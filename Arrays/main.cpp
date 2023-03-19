#include<iostream>
using namespace std;

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void Print(int arr[], const int n);
void ReversPrint(int arr[], const int n);
int Sum(int arr[], const int n);

void main()
{

	const int n = 5;
	int arr[n];
	FillRand(arr, n,200,100);
	Print(arr, n);
	ReversPrint(arr, n);
	cout << "Summa: " << Sum(arr, n) << endl;

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
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}