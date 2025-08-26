#include <iostream>

using namespace std;

int soma (int a, int b) {
	return a + b;
}

double soma (double a, double b, double c) {
	return a + b + c;
}

int soma (int a, int b, int c) {
	return a + b + c;
}

int main() {
	cout << soma(5, 7) << endl;
	return 0;
}
