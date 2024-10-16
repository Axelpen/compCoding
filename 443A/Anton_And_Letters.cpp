#include <bits/stdc++.h>
using namespace std;



int main() {
    vector<char> read;
    char ch;

    while(cin >> ch)
    {
        if(ch == '{' || ch == '}' || ch == ',') continue;
        if(find(read.begin(), read.end(), ch) == read.end()) read.push_back(ch);
    }
    cout << read.size() << endl;
    return 0;
}