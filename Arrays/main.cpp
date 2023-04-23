#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"
#include"Statistics.h"

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

