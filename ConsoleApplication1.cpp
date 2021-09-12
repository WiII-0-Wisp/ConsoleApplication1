#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "a + b = " << a + b << "\na - b = " << a - b << "\nb - a = " << b - a << "\n(|a| + |b|)/2 = " << (abs(a) + abs(b)) / 2 << "\na * b = " << a * b << "\na / b = " << a / b << "\nb / a = " << b / a << endl;
}