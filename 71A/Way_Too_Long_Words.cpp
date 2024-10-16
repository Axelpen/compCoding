#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        string str,buffer;
        cin >> str;

        if(str.length() <= 10){
            cout << str << endl;
            continue;
        }

        buffer = buffer.append(str,0,1);
        buffer = buffer.append(to_string(str.size()-2));
        buffer = buffer.append(str, str.size()-1,1);
        cout << buffer << endl;
    }
}
