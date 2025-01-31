#include <cstring>
#include <cmath>

using namespace std;

bool UserInput(string input)
{
    if(input.empty()) return false;

    try
    {
        int number = stod(input);
    }
    catch(...)
    {
        return false;
    }

    return true;
}

int pow(int a, int b)
{
    int pow = a * b;
    return (int)cin;
}

int div(int a, int b)
{
    int div = a / b;
    return (int)div;

}