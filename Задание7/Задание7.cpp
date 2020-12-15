#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	const int n = 10;
	int* mas = new int[n];
	cout << "Массив:" << endl;
	for (int i = 0; i < n; ++i) {
		mas[i] = rand() % 100 + 1;
		cout << mas[i] << " ";
	}
	cout << endl << "Массив без чётных чисел: " << endl;
	for (int i = 0; i < n; ++i) {
		if (mas[i] % 2 != 0) {
			cout << mas[i] << " ";
		}
	}

}
