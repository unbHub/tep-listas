#include <iostream>

using namespace std;

void printNumber(int x)
{
    cout << "i am printing an integer " << x << endl;
}


void printNumber(float x)
{
    cout << "i am printing a float " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.289;

    printNumber(a);
    printNumber(b);
}
