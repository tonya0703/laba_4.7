#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0, Pi = 4 * atan(1.0);
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "exp(x)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        n = 0; // вираз залежить від умови завдання варіанту
        a = -(1 / x); // вираз залежить від умови завдання варіанту
        S = a;
        do {
            n++;
            R = -((2 * n - 1) / (2 * n + 1)) * (1 / (x * x)); // вираз залежить від умови завдання варіанту
            a *= -(2 / Pi) + R;
            S += a;
        } while (atan(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << exp(x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }

    cout << "-------------------------------------------------" << endl;
    return 0;
}