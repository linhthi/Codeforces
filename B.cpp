#include <bits/stdc++.h>
 
using namespace std;

int nearLeft(int a[]) {
    for (int i = 0; i < 10 ; i++) {
        if (a[i] == 0) return i;
    }
    return 0;
}
int nearRight(int a[]) {
    for (int i=9; i>=0; i--) {
        if (a[i] == 0) return i;
    }
    return 0;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);

    int n; cin >> n;
    string s; cin >> s;
    int a[10];
    memset(a, 0, sizeof(a));

    for (int i=0; i<n; i++) {
        if (s[i] == 'L') a[nearLeft(a)] = 1;
        else if (s[i] == 'R') a[nearRight(a)] = 1;
        else a[s[i]-48] = 0;
    }
    for (int i=0; i<10; i++) cout << a[i];
    
}
