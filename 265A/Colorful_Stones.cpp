#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=1, m=1;
    string str = "", input = "";
    vector <char> buf;
    cin >> str >> input;
    for(char c: str) buf.push_back(c);
    for(char c: input){
        if(c == buf[n-1]){
            n++;
            m++;
        }
    }
    cout << m;
}