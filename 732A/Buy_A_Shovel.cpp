#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=1,total,a,r;
    cin >> a >>r;
    total = a;
    while(!(total % 10 == r) )
    {

        if(total % 10 == r || total % 10 == 0 ) 
            break;
        total = total + a;
        n++;
    }
    cout << n;
    return 0;
}