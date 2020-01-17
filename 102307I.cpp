#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s; 
    int i = 0;
    while(s[i] >= 48 && s[i] <= 57) {
        cout << s[i];
        i++;
    }
    if (i == 0) cout << -1;

    return 0;
}