#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int d = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i+1]) d++;
        else d = 1;
        if (d >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}