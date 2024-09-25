#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b, result = 0;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> a; 
        if(!b)
        {
            result++;
        }
        else if(!(b == a))
        {
            result++;
        }
        b = a;

    }  
    cout << result;
}