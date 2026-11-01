/*Напишите int fareCost(int fare, int rides = 1), возвращающую стоимость поездок.Проверьте оба вида вызова.*/

#include <iostream>

using namespace std;

int fareCost(int fare, int rides = 1) {
	return fare * rides;
}

int main() {
	int a, b, c;

	cout << "Введите стоимость поездки и количество поездок: ";
	cin >> a >> b;
	int cost1 = fareCost(a, b);
	cout << "Общая стоимость поездок: " << cost1 << endl;

	cout << "Введите стоимость одной поездки: ";
	cin >> c;
	int cost2 = fareCost(c);
	cout << "Стоимость одной поездки (по умолчанию): " << cost2 << endl;

	return 0;
}
