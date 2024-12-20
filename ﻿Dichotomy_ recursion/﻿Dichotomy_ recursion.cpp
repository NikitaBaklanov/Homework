#include <clocale>
#include <math.h>
#include <iostream>
#define E 2.71828

using namespace std;

static double f(double x) {
	return pow(E, x) - pow(E, -x) - 2;
}

double find_x(double a, double b, double e) {
	double c = (a + b) / 2;
	if (b - a <= e) {
		return c;
	}
	if (f(c) * f(a) <= 0) {
		return find_x(a, c, e);
	}
	else {
		return find_x(c, b, e);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c = 0;
	double e = 0.0001;
	cin >> a >> b;
	cout << "Ваш итоговый корень равен: " << find_x(a,b,e) << endl;
	return 0;
}