#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T[4], maximumDevices = 0;
    for (int i = 0; i < 4; i++) cin >> T[i];

    sort(rbegin(T), rend(T));

    for (int j = 0; j < 3; j++)
    {
        maximumDevices += T[j] - 1;
    }
    maximumDevices += T[3];
    
    cout << maximumDevices << endl;

    return 0;
}
