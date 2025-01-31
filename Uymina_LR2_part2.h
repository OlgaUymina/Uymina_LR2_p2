#ifndef _Uymina_LR2_part2_h_
#define _Uymina_LR2_part2h_

#include <cstring>

using namespace std;

bool UserInput(string input)
{
    if(input.empty()) return false;

    try
    {
        int number = stoi(input);
    }
    catch(...)
    {
        return false;
    }

    return true;
}

int pow(int NumberA, int NumberB) {

    return NumberA * NumberB ;
}


int div(int NumberA, int NumberB) {
    return NumberA / NumberB;

}
#endif