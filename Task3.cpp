#include <iostream>
#include <random>
using namespace std;

int RandomNumber()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 32767);
    return dist(gen);
}
void outputRandomNumber(int randomNumber)
{
    string randomNumberString = to_string(randomNumber);
    for (int i = 0; i < randomNumberString.length(); i++)
    {
        cout << randomNumberString[i];
        if (i != randomNumberString.length() - 1)
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