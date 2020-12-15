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

	double sum = 0, count_elem = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && mas[i][j] % 2 == 0) {
				sum += mas[i][j];
				count_elem++;
			}
		}
	}
	cout << "\nСреднее арифметическое чётных чисел ниже главной диагонали матрицы равно = " << (double)sum / count_elem << endl;
	system("pause");
	return 0;
}
