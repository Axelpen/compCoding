#include <bits/stdc++.h>

using namespace std;

int main()
{
    int upper = 0, lower = 0;
    string str = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
            lower++;
        else if (isupper(str[i]))
            upper++;
    }
    if (upper <= lower)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
    }
}