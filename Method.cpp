#include <stdio.h>
#include "Method.h"

Method :: Method(string n, string t) {
	name = n;
	type = t;
}
Method :: ~Method() {
}
void Method :: print() {
	cout << "��� ������: " << name << endl;
	cout << "��� ������: " << type << endl;
}
string Method :: ret() {
	return type;
}
