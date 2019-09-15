#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int cnt  = 0;
       
        for (int i = 0 ; i < n; i++) { 
            cin >> a[i];
        }
        int mina = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            mina = min(mina, a[i]);
            if (a[i] > mina) cnt++;
            
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}