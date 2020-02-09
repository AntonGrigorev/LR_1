#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Method {
private:
	string name;
	string type;
public:
	Method(string n, string t) {
		name = n;
		type = t;
	}
	~Method() {
	}
	void print() {
		cout << "��� ������: " << name << endl;
		cout << "��� ������: " << type << endl;
	}
	string ret() {
		return type;
	}
};

int main() {
	int m;
	string n2, t2;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "���� ����� ��������: " << endl;;
	cin >> m;
	Method** arr = new Method* [m];
	for (int i = 0; i < m; i++) {
		cout << "����� " << i + 1 << ":" << endl;
		cout << "���:";
		cin >> n2;
		cout << "���:";
		cin >> t2; cout << endl;
		arr[i] = new Method(n2, t2);
	}
	for (int i = 0; i < m; i++) {
		cout << "����� " << i + 1 << ":" << endl;
		arr[i]->print();
	}
	cout << endl;
	cout << "���� ����:";
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
}