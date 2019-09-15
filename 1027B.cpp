#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    int a[n+1][m+1];
    int cnt = 0;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin >> a[i][j];
            if (a[i][j]) cnt++;
        }
    }
    if (cnt == 0) {
        cout << 0;
        return 0;
    }
    vector<pair<int, int>> mem;
    for (int i=1; i<n; i++)
        for (int j=1; j<m; j++) {
            if (a[i][j] == 1 && a[i][j+1] == 1 && a[i+1][j] == 1 && a[i+1][j+1]) {
                mem.push_back(make_pair(i, j));
            }
        }
    int b[n+1][m+1];
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) b[i][j] = 0;
    }
    for (int i = 0; i < mem.size(); i++) {
        b[mem[i].first][mem[i].second] = 1;
        b[mem[i].first][mem[i].second+1] = 1;
        b[mem[i].first+1][mem[i].second] = 1;
        b[mem[i].first+1][mem[i].second+1] = 1;
    }
    bool check = true;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (a[i][j] != b[i][j]) check = false;
        }
    }
    if (check) {
        cout << mem.size() << endl;
        for (int i=0; i<mem.size(); i++) {
            cout << mem[i].first << " " << mem[i].second << endl;
        }
    }
    else cout << "-1";
    return 0;
}