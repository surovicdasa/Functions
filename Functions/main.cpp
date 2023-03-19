#include<iostream>
using namespace std;

int Add(int a, int b);	//Прототип функции (Объявление функции - Function declaration)
						//Прототип функции нужне для того чтобы имя функции, ее список 
						//принимаемых параметров, и тип возвращаемого значения были 
						//известны на момент вызова.
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

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
int Add(int a, int b)	//Реализация функции (Определене функции - Function definition)
						//Реализаци определяет что делает функция.
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