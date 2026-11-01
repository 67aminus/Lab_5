/*Напишите void addRide(int& rides), увеличивающую количество поездок на 1. Покажите значение до и после.*/
#include <iostream>

using namespace std;

void addRide(int& rides) {
	 rides++;
}

int main() {

	int beginRides;
	cout << "Введите начальное количество поездок: ";
	cin >> beginRides;
	cout << "Количество поездок до: " << beginRides << endl;
	addRide(beginRides);
	cout << "Количество поездок после: " << beginRides << endl;
	return 0;
}
