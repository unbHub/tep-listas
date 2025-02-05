#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sec, min, hour;
    cin >> N;
    sec = N%60;
    min = (N/60)%60;
    hour = N/3600;

    cout << hour << ":" << min << ":" << sec << endl;

    return 0;
}
