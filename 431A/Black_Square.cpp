#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3, a4, cal = 0;

    string str;
    cin >> a1 >> a2 >> a3 >> a4>> str;
    for(int i =0;i < str.size();i++)
    {
        switch (str[i])
        {
        case '4':
            cal += a4;
            break;
        case '3':
            cal += a3;
            break;
        case '2':
            cal += a2;
            break;
        case '1':
            cal += a1;
            break;
        default:
            break;
        }

    }
    cout << cal;
    return 0;
}
