#pragma once
#include"constants.h"

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
