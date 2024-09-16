#include <iostream>
#include <sstream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int main() {
    Fraction fraction1, fraction2, sum;
    char slash;

    cout << "Enter first fraction: ";
    cin >> fraction1.numerator >> slash >> fraction1.denominator;

    cout << "Enter second fraction: ";
    cin >> fraction2.numerator >> slash >> fraction2.denominator;

    sum.numerator = fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator;
    sum.denominator = fraction1.denominator * fraction2.denominator;

    cout << "Sum = " << sum.numerator << "/" << sum.denominator << endl;

    return 0;
}