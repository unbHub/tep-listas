#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string specialChars = "aeios";

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int count = 1;
        string password;
        cin >> password;
        for (char word : password)
        {
            if (specialChars.find(tolower(word)) == string::npos)
            {
                count *= 2;
            } else {
                count *= 3;
            }

        }
        cout << count << endl;
    }

    return 0;
}
