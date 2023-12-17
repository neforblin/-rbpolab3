#include <iostream>
#include <complex>
#define _SILENCE_NONFLOATING_COMPLEX_DEPRECATION_WARNING
import Math;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int choice;

    cout << "������� 1, ����� ������ ������ � �������� ������������ �����\n        2 - ������ �������������� � ������ �����: \n";
    cin >> choice;

    Complex userComplex;

    if (choice == 1) {
        double mod, arg;

        cout << "������� ������ �����: ";
        cin >> mod;

        cout << "������� �������� �����: ";
        cin >> arg;

        userComplex = Complex::FromExponentialForm(mod, arg);
    }
    else if (choice == 2) {
        double re, im;

        cout << "������� �������������� ����� �����: ";
        cin >> re;

        cout << "������� ������ ����� �����: ";
        cin >> im;

        userComplex = Complex::FromAlgebraicForm(re, im);
    }
    else {
        cout << "������ �������� �����!\n����������, �������� ����������� ��� ���." << endl;

        return 1;
    }

    int nominator, denominator;
    cout << "������� ������������ ����� � ����� ���������/�����������: ";

    char separator;
    cin >> nominator >> separator >> denominator;

    Rational userRational(nominator, denominator);

    double userDouble;

    cout << "������� �������� �����:: ";
    cin >> userDouble;

    cout << "f(" << userComplex << ") = " << f(userComplex) << endl;
    cout << "f(" << userRational << ") = " << f(userRational) << endl;
    cout << "f(" << userDouble << ") = " << f(userDouble) << endl;

    return 0;
}
