/*Перегрузите distance : int distance(int a, int b) и int distance(int a, int b, int c).
Возвращайте сумму длин двух или трёх участков маршрута.*/

#include <iostream>

using namespace std;

int distance(int a, int b) {
	return a + b;
}

int distance(int a, int b, int c) {
	return a + b + c;
}

int main() {
	int quantity;
	int a, b;
	int result;
	cout << "Введите количество участков маршрута (2 или 3): ";
	cin >> quantity;
	if (quantity == 2) {
		cout << "Введите длины участков: ";
		cin >> a >> b;
		result = distance(a, b);
	}
	else if (quantity == 3) {
		int c;
		cout << "Введите длины участков: ";
		cin >> a >> b >> c;
		result = distance(a, b, c);
	}
	else {
		cout << "Ошибка данных";
		return 0;
	}
	cout << "Сумма длин участков маршрута: " << result;

	return 0;
}