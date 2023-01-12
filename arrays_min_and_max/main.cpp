#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	cout << "Введите элементы массива (" << n << " шт.): ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение в массиве:  " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}