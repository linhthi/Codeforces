#include <bits/stdc++.h>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    long long a,b;
    vector <long long> p;
    cin >> a >> b;
    
    
    if (a % b || a < b) return 0;
    else {
        for (long long i = 1; i <= sqrt(a); i++) {
            if (a % i == 0) {
                if (a / i == i) p.push_back(i);
                else {
                    p.push_back(i);
                    p.push_back(a/i);
                }
            }
        }
        sort(begin(p), end(p));
        for (int i = 0; i < p.size(); i++) {
            if (p[i] % b == 0) cout << p[i] <<" ";
            // cout <<  p[i] << " ";
        }
        
    }
    
}