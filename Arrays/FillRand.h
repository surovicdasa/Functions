#pragma once
#include"constants.h"
#include"stdafx.h"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 26);
void FillRand(int arr[rows][cols], const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(double arr[rows][cols], const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(char arr[rows][cols], const int rows, const int cols, int minRand = 0, int maxRand = 100);

