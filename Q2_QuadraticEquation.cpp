#include "iostream"
#include "iomanip"
#include "math.h"
using namespace std;

float calcDelta(float a, float b, float c);
void quadraticEquation(float a, float b, float c);

int main(int argc, char const *argv[])
{
    float a = 50;
    float b = 50;
    float c = 50;
    cout << "Ax^2 + Bx + C = 0" << endl;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    quadraticEquation(a, b, c);
    return 0;
}

float calcDelta(float a, float b, float c)
{
    return b * b - 4 * a * c;
}

void quadraticEquation(float a, float b, float c)
{
    float delta = calcDelta(a, b, c);
    cout << delta << endl;
    if (delta < 0)
    {
        cout << "The equation has no solution" << endl;
        return;
    }
    if (delta == 0)
    {
        cout << "Equation has 1 solution: " << endl;
        cout << setw(5) << left << "x = " << setw(15) << right << (-b + sqrt(delta)) / (2 * a) << endl;
        return;
    }
    if (delta > 0)
    {
        cout << "Equation has 2 solution: " << endl;
        cout << setw(5) << left << "x1 = " << setw(15) << right << (-b + sqrt(delta)) / (2 * a) << endl;
        cout << setw(5) << left << "x2 = " << setw(15) << right << (-b - sqrt(delta)) / (2 * a) << endl;
        return;
    }
}
