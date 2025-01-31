#include <iostream>
#include <Uymina_LR2_part2.h>

using namespace std;

int InputDoubleRec(string description)
{
    static string tempStrBuf; //Строка-буфер для хранения ввода
    cout << description << endl;
    getline(cin, tempStrBuf);

    if(!UserInput(tempStrBuf))
        return InputDoubleRec(description);

    return stod(tempStrBuf);
}

int main()
{
    //Вводим а и в
    int a = InputDoubleRec("Enter a:");
    int b = InputDoubleRec("Enter b:");

    // вычисления
    cout << "Integer of pow: " << a * b << endl;
    cout << "Integer of div: " << a / b << endl;
}