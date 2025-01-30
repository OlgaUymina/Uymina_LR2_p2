#include <iostream>
#include <string>

using namespace std;

// Функции для выполнения операций
void multiply(double A, double B) {
    // Здесь будет код для умножения
}

void divide(double A, double B) {
    // Здесь будет код для деления
}

int main() {
    double A, B;
    int choice;

    // Ввод A и B
    cout << "Введите значение A: ";
    cin >> A;
    cout << "Введите значение B: ";
    cin >> B;

    // Показать меню
    cout << "Выберите операцию:" << endl;
    cout << "1. Умножение (*)" << endl;
    cout << "2. Деление (/)" << endl;
    cout << "Введите номер операции (1 или 2): ";
    cin >> choice;

    // Обработка выбора пользователя
    switch (choice) {
        case 1:
            multiply(A, B);
            break;
        case 2:
            divide(A, B);
            break;
        default:
            cout << "Некорректный выбор!" << endl;
    }

    return 0;
}
