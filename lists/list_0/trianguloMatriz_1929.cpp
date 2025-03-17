#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sticks[4];
    char answer = 'N';

    for (int i = 0; i < 4; i++) cin >> sticks[i];
   
    for (int i = 0; i < 4; i++)
    {
        if (answer == 'S') break;
        for (int j = 1; j < 4; j++)
        {
            if (i == j || i == j-1) continue;

            if (sticks[i] + sticks[j-1] > sticks[j] && sticks[i] + sticks[j] > sticks[j-1] && sticks[j] + sticks[j-1] > sticks[i])
            {
                answer = 'S';
                break;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
