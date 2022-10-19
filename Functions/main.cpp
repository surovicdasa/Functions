#include<iostream>
using namespace std;
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}


void main()
{
	int a, b;
	cout << sizeof(int) << endl; // оператор sizeof() возвращает размер типа или значения в Bytes. 
	cout << "Type two numbers: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a,b) << endl;
	cout << a << "*" << b << "=" << Mul(a,b) << endl;
	cout << a << "/" << b << "=" << Div(a,b) << endl;

}