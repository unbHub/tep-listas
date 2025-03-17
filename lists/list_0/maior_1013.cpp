#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3, maiorAB, maiorBC, maior;
    cin >> num1 >> num2 >> num3;

    maiorAB = (num1+num2+abs(num1-num2))/2;
    maiorBC = (num2+num3+abs(num2-num3))/2;
    maior = (maiorAB+maiorBC+abs(maiorAB-maiorBC))/2;
   
    cout << maior << " eh o maior" << endl;

    return 0;
}
