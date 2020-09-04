#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        if (a  == b) cout << "0\n";
        else if (a < b) {
            cout << ((b - a) % 2 ? "1\n": "2\n"); 
        }
        else {
            cout << ((a - b) % 2 ? "2\n": "1\n");
        }
    }
}