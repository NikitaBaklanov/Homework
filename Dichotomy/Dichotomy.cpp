#include <iostream>
#include <clocale>
#include <math.h>
#define E 2.71828

using namespace std;

static double f(double x) {
	return pow(E, x) - pow(E, -x) - 2;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c = 0;
	double e = 0.001;
	cin >> a >> b;
	while (b - a > e) {
		c = (a + b) / 2;
		if (f(c) * f(a) <= 0) {
			b = c;
		}
		else {
			a = c;
		}
		cout << c << endl;
	}
	cout << "Ваш итоговый корень равен: " << c << endl;
}
