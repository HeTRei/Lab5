#include <iostream>
#include <iomanip>
using namespace std;

int t;
int counter = 0;
float X0, Xk, x, y, h;

int height = 0;

int prompt()
{
    cout << "Введiть данi:\n" << endl;
    cout << "t = ";
    cin >>t;cout <<"\nВведiть Хпоч" << "\n";
    cin >> X0;
    cout << "Хкiн"<<"\n";
    cin >> Xk;
    cout<< "Крок h"<<endl;
    cin >> h;
    cout << "\nIнтервал"<<"[ "<<X0<<" ; "<<Xk<<"]"<<"\t"<<"Крок h="<<h;
    return 0;
}
int horizontalLines()
{
    if (counter == 0)
    {
        cout << "\n---------------------\n|     x   |       y |\n|---------|---------|"<<endl;
        counter++;
    }
    else
        cout << "---------------------" << endl;
    return 0;
}
int calc()
{
    x = X0;
    while (x < Xk)
    {
        if (x <= 0) y = x;
        else if (x <= 10) y = t * x;
        else y = x * x;
        cout << "|" << setw(9) << x << "|" << setw(9) << y << "|" << endl;
        x += h;
    }
    return 0;
}

int triangleDraw()
{
    cout << "Input height of triangle: ";
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            cout << ' ';
        }
        for (int j = height - 2 * i; j <= height; j++)
        {
            cout << '^';
        }
        cout << endl;
    }
    return 0;
}
int triangleHeight()
{
    cout << endl << "Height of the triangle is " << height << endl;
    return 0;
}

int main()
{
    setlocale (LC_CTYPE, "ua");
    prompt();
    horizontalLines();
    calc();
    horizontalLines();
    triangleDraw();
    triangleHeight();
    return 0;
}