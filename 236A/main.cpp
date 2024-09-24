#include <bits/stdc++.h>

using namespace std;

string input = "";

int main() {
    cin >> input;
    set<char> checker(input.begin(), input.end());
    if(checker.size() % 2 == 0)
      cout << "CHAT WITH HER!";
    else
      cout <<"IGNORE HIM!";
}
