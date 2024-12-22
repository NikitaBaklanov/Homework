#include <math.h>
#include <iostream>
#include <clocale>

using namespace std;

static double f(double x, int n) {
    return pow(-1, n) * (pow((1 + x), 2 * n) / n);
}

static double S(double x, int n) {
    if (n == 0) return 0;
    if (n == 1) return f(x,1);
    else {
        return  f(x,n) + S(x, n - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double x;
    cout << "Введите любой x: ";
    cin >> x;
    cout << "Введите целый n > 0 (в случае введения некорректного n будет применен n = 1): ";
    cin >> n;
    n = n > 0 ? n : 1;
    cout << "Результатом вычислений будет: " << S(x, n) << endl;
    system("pause");
    return 0;
}
