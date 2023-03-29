#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

int lab3()
{
    double sum, prod, fac_product;
    long long k, i, n, fac_counter;
    cout << "Press S to perform summation, press M to perform multiplication" << endl;
    char selection = _getch();
    if (selection == 'S' or selection == 's')
    {
        cout << "Enter the value of n: ";
        cin >> n;
        if (cin.fail() or n < 1)
        {
            cout << "Incorrect value! Should be a number that is greater than or equal to 1, but not greater than 9223372036854775807. Exiting the program";
            exit(1);
        }
        cout << "Notice! If the value from user input is not an integer, then the input will be cut off in a way that will only leave the integer part of the input" << endl;
        for (sum = 0.0, k = 1; k <= n; k++)
        {
            for (fac_counter = 1, fac_product = 1.0; fac_counter <= k; fac_counter++)
            {
                fac_product = fac_product * fac_counter;
            }
            sum = sum + ((pow(k, n) / (fac_product))*pow(-1, k+n)) + 0.0;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "The result of summation is " << sum << endl;
    }
    else if (selection == 'M' or selection == 'm')
    {
        for (prod = 1.0, i = 1; i <= 10; i++)
        {
            for (fac_counter = 1, fac_product = 1.0; fac_counter <= i; fac_counter++)
            {
                fac_product = fac_product * fac_counter;
            }
            prod = prod * ((1 / fac_product) - pow(i, 2)) + 0.0;
        }
        cout << "The result of multiplication is " << prod << endl;
    }
    else
    {
        cout << "Wrong button pressed, exiting the program.";
        exit(1);
    }
    cout << endl << "Press R to restart, press any other key to exit";
    char restart = _getch();
    if (restart == 'r' or restart == 'R')
    {
        cout << endl;
        lab3();
    }
    return 0;
}
int lab4()
{
    double dx, Integrl;
    double a = 0;
    double b = atan(1)*2;
    int n;

    char restart = 'r';
    while (restart == 'R' or restart == 'r')
    {
        cout << "Enter the amount of sectors n: ";
        cin >> n;
        if (cin.fail() or n < 1)
        {
            cout << "Incorrect value! Should be a number that is greater than or equal to 1, but not greater than 9223372036854775807. Exiting the program";
            exit(1);
        }

        dx = (b - a) / n;

        Integrl = 0;

        for (int i = 0; i < n; i++)
        {
            double x = a + i * dx;

            double f = pow(sin(x / 2), 3);

            Integrl += f * dx;
        }

        cout << "The integral is: " << fixed << setprecision(4) << Integrl << endl;

        cout << "Press R to restart, any other key to exit" << endl;
        restart = _getch();
    }
}
int LabSelect()
{
    char LabSelect;
    cout << "Press 3 to launch Lab3, press 4 to launch Lab4" << endl;
    switch (_getch())
    {
        case '3':
            lab3();
            break;
        case '4':
            lab4();
            break;
        default:
            cout << "Wrong button pressed! Exiting..." << endl;
            break;
    }
    return 0;
}

int main()
{
    LabSelect();
    return 0;
}