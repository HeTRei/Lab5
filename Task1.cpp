#include <iostream>
#include <iomanip>
using namespace std;

// Створення глобальних змінних
int t;
int counter = 0;
float X0, Xk, x, y, h;

int height = 0;

// Функція, що запитує в користувача дані для розрахунку значень математичної функції
int prompt()
{
    cout << "Введiть данi:\n" << endl;
    cout << "t = ";
    cin >>t;
    cout <<"\nВведiть Хпоч" << "\n";
    cin >> X0;
    cout << "Хкiн"<<"\n";
    cin >> Xk;
    cout<< "Крок h"<<endl;
    cin >> h;
    cout << "\nIнтервал"<<"[ "<<X0<<" ; "<<Xk<<"]"<<"\t"<<"Крок h="<<h;
    return 0;
}

// Функція, що відповідає за форматування таблиці в консолі
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

// Функція, що розраховує значення математичної функції
int calc()
{
    x = X0;
    while (x < Xk) // Цикл, що діє допоки x не сягне значення Xk
    {
        if (x <= 0) y = x;
        else if (x <= 10) y = t * x;
        else y = x * x;
        cout << "|" << setw(9) << x << "|" << setw(9) << y << "|" << endl; // Виведення результату обчислення в таблицю при поточному значенні x
        x += h;
    }
    return 0;
}

// Функція, що запитує значення висоти трикутника
int triangleHeight()
{
    cout << "Input height of triangle: ";
    cin >> height;
    return 0;
}

// Функція, що малює трикутник з заданою висотою
int triangleDraw()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++) // Цикл виведення пропусків
        {
            cout << ' ';
        }
        for (int j = height - 2 * i; j <= height; j++) // Цикл виведення знаків '^', з яких складається трикутник
        {
            cout << '^';
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    setlocale (LC_CTYPE, "ua");
    prompt();
    horizontalLines();
    calc();
    horizontalLines();
    triangleHeight();
    triangleDraw();
    return 0;
}