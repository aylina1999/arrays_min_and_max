#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	cout << "������� �������� ������� (" << n << " ��.): ";
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
	cout << "����������� �������� � �������:  " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
}