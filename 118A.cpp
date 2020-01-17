#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string v = "aoyeui";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for (int i = 0 ; i < s.length(); i++) {
        if (v.find(s[i], 0) == -1) cout << '.' << s[i]; 
    }
    return 0;
}