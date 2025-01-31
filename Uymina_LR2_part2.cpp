#include <iostream>
#include "Uymina_LR2_part2.h"

using namespace std;

int main()
{
    string str_input;

    //Вводим а и в
    cout <<"Введите a" << endl;
    getline(cin, str_input);

    while (!UserInput(str_input)) {
        cout <<"Введите a" << endl;
        getline(cin, str_input);
    }
    
    int NumberA = stoi(str_input);
    cout <<"Введите b" << endl;
    getline(cin, str_input);

    while (!UserInput(str_input)) {
        cout <<"Введите b" << endl;
        getline(cin, str_input);
    }

    int NumberB = stoi(str_input);

    // вычисления
    int pow = NumberA * NumberB;
    int div = NumberA / NumberB;
    
    cout << "Integer of pow is " << a * b << endl;
    cout << "Integer of div is " << a / b << endl;
}