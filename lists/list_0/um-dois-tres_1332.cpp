#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;
        
        if (word.size() == 5) 
        {
            cout << 3 << endl;
        } 
        else if (word.size() == 3) 
        {
            int countOne = (word[0] == 'o') + (word[1] == 'n') + (word[2] == 'e');
            int countTwo = (word[0] == 't') + (word[1] == 'w') + (word[2] == 'o');

            if (countOne >= 2) cout << 1 << endl;
            else if (countTwo >= 2) cout << 2 << endl;
        }
    }

    return 0;
}
