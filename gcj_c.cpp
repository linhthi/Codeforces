#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    vector<pair<pair<int,int>, int>> time;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        time.push_back(make_pair(make_pair(x,y), i));
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for (int it = 1; it < t; it++) {
        cout << "Case #" << it << ":";
        testCase();
    }
}