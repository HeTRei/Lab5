#include <iostream>
#include <random>
using namespace std;

// Функція отримання випадкового числа
int RandomNumber()
{
    random_device rd; // Призначення змінній rd значення random_device, а саме ID випадкового пристрою з комп'ютера
    mt19937 gen(rd()); // Функція випадкового числа з сідом rd
    uniform_int_distribution<> dist(1, 32767); // Визначення лімітів можливих чисел
    return dist(gen);
}

// Функція виведення отриманого числа у вигляді серії цифр
void outputRandomNumber(int randomNumber)
{
    string randomNumberString = to_string(randomNumber);
    for (int i = 0; i < randomNumberString.length(); i++) // Основний цикл функції
    {
        cout << randomNumberString[i]; // Виведення символу з індексом i
        if (i != randomNumberString.length() - 1) // Якщо виведена цифра не остання, буде виведено пропуск
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    outputRandomNumber(RandomNumber());
    return 0;
}