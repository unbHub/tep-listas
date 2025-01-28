#include <iostream>
using namespace std;

int main()
{
//    int bucky[5] = {66, 75, 2, 43, 99};
//    cout << bucky[0] << endl;

    int bucky2[9];

    for(int x = 0; x < 9; x++) {
        cin >> bucky2[x];
    }

    for(int x = 0; x < 9; x++) {
        cout << x << " ------ "<< bucky2[x] << endl;
    }
}
