#include <bits/stdc++.h>
using namespace std;

int temp,a,b,c,tot = 0;

int main() {
    cin >> temp;
    for(int i = 0; i < temp; i++) 
    {
        cin >> a >> b >> c;
        if(a+b+c >= 2)
        tot++;
    }
    cout << tot;
}