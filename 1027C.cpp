#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
       long long n,a,b;
       string s;
       cin >> n >> a >> b;
       cin >> s;
       long long ca = 2, cb = 0, ct = 0;

       for (int i=1; i<n-1; i++) {
           if (s[i] == '1') cb++;
           if ((s[i]=='0'&& s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0')) ct++;
       }

       ca = n-cb+1;
       cout << ca <<" " << " "<< cb << " "<< ct << endl;
       cout << (n+ct)*a + (ca+2*cb)*b<< endl;

    }
    

    return 0;
}