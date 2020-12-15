#include <iostream>

using namespace std;


int main()
{
	setlocale(0, "ru");
	const int n = 10;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " элемент массива --- ";
		cin >> mas[i];
	}
	cout << "\n";
	cout << "Вот так выглядит ваш массив: ";
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
	cout << "\n";
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
	cout << endl << endl << "Ваш интервал: [" << a << ";" << b << "]";
	for (int i = 0; i < n; i++)
		if (i >= a && i <= b)
			mas[i - 1] = 0;
	cout << endl << endl << "Вот так выглядит ваш массив после преобразования: ";
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << "\n";
}
