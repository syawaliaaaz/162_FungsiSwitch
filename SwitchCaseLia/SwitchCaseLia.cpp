

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}
int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(float a, float b)
{
	return a / b;
}

void inputData()
{
	cout << "\nMasukkan bilangan pertama: ";
	cin >> bilangan1;
	cout << "Masukkan bilangan kedua: ";
	cin >> bilangan2;
}

