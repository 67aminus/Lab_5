/* Напишите int routeCost(int fare, int rides), возвращающую общую стоимость поездок.*/
#include <iostream>
#include <windows.h>

using namespace std;

int routeCost(int fare, int rides) {
	return fare * rides;
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите стоимость поездки и количество поездок: ";
	cin >> a >> b;
	int cost = routeCost(a, b);
	cout << "Общая стоимость поездок: " << cost << endl;
	return 0;
}
