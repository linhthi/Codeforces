#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    int t = T;
    while (T--) {
        cout << "Case #" <<t- T << ": ";
        string n;
        int a[n.length()], b[n.length()];
        memset(b, 0, sizeof(b));
        cin >> n;
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == '4') {
                a[i] = 2;
                b[i] = 2;
            }
            else {
                a[i] = n[i]-'0';
                b[i] = 0;
            }
            cout << a[i];
        }

        cout << " ";
        int c = 0;
        for (int i = 0; i < n.length(); i++) {
            if (b[i] !=0) {
                c = i;
                break;
            }
        }
        for (int i = c; i < n.length(); i++) {
            cout << b[i];
        }
        cout << endl;   
    }
    return 0;
}