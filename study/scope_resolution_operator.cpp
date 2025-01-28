#include <iostream>
using namespace std;

// Every single function can access this variable
int tuna = 69;

int main()
{
    int tuna = 10;
    // Use the global value
    cout << ::tuna << endl;
}

