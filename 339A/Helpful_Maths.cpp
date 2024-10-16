#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> numbers;
    string final = "", buffer = "";

    cin >> buffer;
    for (char &c : buffer)
    {
        if (!(c == '+'))
        {
            numbers.push_back(c);
        }
    }
    sort(numbers.begin(), numbers.end());
    for (char c : numbers)
    {
        final += c;
        final += "+";
    }

    if (!final.empty())
    {
        final.pop_back(); 
    }

    cout << final << endl;
    return 0;
}