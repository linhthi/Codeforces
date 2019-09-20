#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    
    int n;
    cin >> n;
    while(n--) {
        int c, m, o;
        cin >> c >> m >> o;
        cout << min(min(c, m), (c+m+o)/3) << endl;
    }
    

    return 0;
}