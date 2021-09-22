#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::to_string;

void f1(unsigned n) {
	if (n == 0) {
		cout << "boo!" << endl;
	} 
	else {
		cout << n << endl;
		f1(n - 1);
	}
}

void f2(unsigned n) {
	if (n == 0) {
		cout << "boo!" << endl;
	}
	else {
		f2(n - 1);
		cout << n << endl;
	}
}

void f3(unsigned n) {
    cout << n << endl;
    f3(n - 1);
    cout << "boo!" << endl;
}

int main() {
    f1(2);
    return 0;
}


