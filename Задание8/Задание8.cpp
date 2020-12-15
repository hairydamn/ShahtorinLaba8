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
	cout << "\n";
	int a, b;
	cout << "Введитете левую границу интервала: ";
	cin >> a;
	cout << "Введитете правую границу интервала: ";
	cin >> b;
	bool pr = true;
	while (pr == true) {
		if (a > b) {
			cout << "Попробуйте ещё раз ввести интервал. Левая граница должна быть меньше правой границы!" << endl;
			cout << "Введитете левую границу интервала: ";
			cin >> a;
			cout << "Введитете правую границу интервала: ";
			cin >> b;
		}
		else if (a < 0 && b > n) {
			cout << "Попробуйте ещё раз ввести интервал. Границы не могут быть больше или меньше, чем элементов в массиве!" << endl;
			cout << "Введитете левую границу интервала: ";
			cin >> a;
			cout << "Введитете правую границу интервала: ";
			cin >> b;
		}
		else {
			break;
		}
	}
	cout << endl << endl << "Ваш интервал: [" << a << ";" << b << "]" << endl;
	cout << "\n";
	cout << "Ваш массив без интервальных значений" << endl;
	for (int i = 0; i < n; ++i) {
		if (mas[i] < a || mas[i] > b) {
			cout << mas[i] << " ";
		}
	}
}