#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    for(int i = 1; i < 25; i++) {
        cout << rand() % 6 << endl;
    }
}
