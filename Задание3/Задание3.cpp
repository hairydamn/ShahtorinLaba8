#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	const int n = 10;
	int* mas = new int[n];
	cout << "Массив:" << endl;
	for (int i = 0; i < n; ++i) 
	{
		mas[i] = rand() % 20 + 1;
		cout << mas[i] << " ";
	}
	int min = 20;
	int nm;
	for (int i = 0; i < n; ++i) {
		if (min >= mas[i]) {
			min = mas[i];
			nm= i;
		}
	}
	cout << endl << "Номер последнего минимального элемента: " << nm + 1;
}
