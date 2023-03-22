#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int n, *arr;
	cout << "Nhap so phan tu mang";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu" << i + 1;
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
	cout << "Mang sau khi sap xep la";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	delete[] arr;
	return 0;
}
