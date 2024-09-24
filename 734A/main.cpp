#include <bits/stdc++.h>
using namespace std;
int n,a,d;
char ch;
int main() {
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>ch;
        if(ch == 'A')
        {
            a++;
        }
        else if(ch == 'D')
        {
            d++;
        }
    }
    if(a > d)
        cout<<"Anton";
    else if(a < d)
        cout<<"Danik";
    else
        cout<<"Friendship";
}