#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"// подключение модуля с тестируемым кодом
#include "Uymina_LR2_part2.h"

using namespace cute;

void pow () {    // входные значения    
    int a = 2;
    int b = 6;    // ожидаемый результат    
    int expected = 12;    // получение значения с помощью тестируемого кода    
    int actual = a * b;    // сравнение ожидаемого результата с полученным    
    ASSERT_EQUAL(expected, actual);
}    

int main() {   // создаём тестовый набор    
    s.push_back(CUTE(testPow));    //создаем listener и runner    
    ide_listener<> listener;
    makeRunner(listener)(s, "Test pow");
    return 0;
}