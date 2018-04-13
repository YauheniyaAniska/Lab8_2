// Lab8_2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <float> vector;
	int size;
	cout << "Введите колличество элементов вектора:" << endl;
	cin >> size;
	float number;
	cout << "Введите элементы:" << endl;
	for (int i = 0; i<size; i++){
		cout << "X[" << i << "]";
		cin >> number;
		vector.insert(vector.end(), number);
	}
	float sum = 0;
	for (int i = 0; i < size; i++){
		float temp;
		temp = vector[i] * vector[i];
		sum += temp;
	}
	cout << "Длина вектора: " << sqrt(sum) << endl;
	system("pause");
	return 0;
}