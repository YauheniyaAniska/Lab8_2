// Lab8_2.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������� ����������� ��������� �������:" << endl;
	cin >> size;
	float number;
	cout << "������� ��������:" << endl;
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
	cout << "����� �������: " << sqrt(sum) << endl;
	system("pause");
	return 0;
}