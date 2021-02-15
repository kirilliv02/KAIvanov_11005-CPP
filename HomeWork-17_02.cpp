#include <iostream>
#include <cmath>
using namespace std;

void sum()
{
    int x, a;
    int sum = 0;
    cout << "Enter amount of numbers: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number number #" << (i + 1) << ": ";
        cin >> a;
        sum += a;
    }
    cout << "The sum is: " << sum << endl;
}

void roots()
{
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (b * b - 4 * a * c == 0)
    {
        double x = -b / (2 * a);
        cout << "x = " << x << endl;
    }
    else if (b * b - 4 * a * c > 0)
    {
        double x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else
    {
        cout << "No roots!" << endl;
    }
}

void log()
{
    int x;

    cout << "Enter x: ";
    cin >> x;

    int p = 0;
    for (int i = 2; i < x; i *= 2)
    {
        p += 1;
    }

    cout << "Max degree 2 is " << p << endl;
}

int power(int x, unsigned p)
{
    int degree = 1;
    for (unsigned i = 0; i < p; i++)
    {
        degree *= x;
    }
    return degree;
}

int main()
{
    sum();
    roots();
    log();
    int x;
    unsigned p;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a degree: ";
    cin >> p;
    cout << power(x, p) << endl;
    return 0;
}