#include <iostream>
#include <string>
#include <windows.h>
#include "Method.h"
using namespace std;

int main(int argc, const char* argv[]) {
	int m;
	string n2, t2;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Ввод числа объектов: " << endl;;
	cin >> m;
	Method** arr = new Method * [m];
	for (int i = 0; i < m; i++) {
		cout << "Метод " << i + 1 << ":" << endl;
		cout << "Имя:";
		cin >> n2;
		cout << "Тип:";
		cin >> t2; cout << endl;
		arr[i] = new Method(n2, t2);
	}
	for (int i = 0; i < m; i++) {
		cout << "Метод " << i + 1 << ":" << endl;
		arr[i]->print();
	}
	cout << endl;
	cout << "Ввод типа:";
	string get;
	cin >> get;
	cout << endl;
	for (int i = 0; i < m; i++) {
		if (get == arr[i]->ret()) {
			arr[i]->print();
		}
	}
	for (int i = 0; i < m; i++) {
		delete arr[i];
	}
	delete[] arr;
}