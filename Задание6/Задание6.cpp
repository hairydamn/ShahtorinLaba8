#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(0, "ru");

	int n;
	cout << "Введите размерность квадратной матрицы" << endl;
	cin >> n;

	int** mas = new int* [n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(7) << (mas[i][j] = rand() % 100);
		cout << "\n";
	}

	int* mass = new int[n];

	for (int i = 0; i < n; i++)
	{
		mass[i] = mas[i][0];
		for (int j = 1; j < n; j++)
		{
			if (mass[i] < mas[i][j])
			{
				mass[i] = mas[i][j];
			}
		}
	}
	cout << "\n";
	cout << "Максимальные элементы каждой строки " << endl;
	for (int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
	cout << "\n";
	system("pause");
	return 0;
}
