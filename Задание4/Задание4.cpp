#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "ru");
	const int n = 10;

	int* mas = new int[n];
	cout << "Массив:" << endl;
	for (int i = 0; i < n; ++i) {
		mas[i] = rand() % 41 - 20;
		cout << mas[i] << " ";
	}
	int maxotr = -n - 1;
	for (int i = 0; i < n; ++i) {
		if (mas[i] < 0) {
			if (maxotr < mas[i]) {
				maxotr = mas[i];
			}
		}
	}
	cout << endl << "Максимальный отрицательный элемент: " << maxotr;
}
