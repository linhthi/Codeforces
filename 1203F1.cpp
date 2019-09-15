#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;

struct node {
    int a, b;
} p[maxn];
 
bool cmp(node a, node b) {
    return a.a < b.a;
}
 
bool cmp1(node a, node b) {
    return a.a + a.b > b.a + b.b;
}

int cnt;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int n, r;
    cin >> n >> r;
    vector<node> q;
    for (int i = 1; i <= n; i++)
        cin >> p[i].a >> p[i].b;
    sort(p + 1, p + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        if (p[i].a <= r && p[i].b >= 0)
            r += p[i].b, cnt++;
        if (p[i].b < 0)
            q.push_back(p[i]);
    }
    sort(q.begin(), q.end(), cmp1);
    for (auto i:q) {
        if (i.a <= r && r + i.b >= 0) {
            r += i.b;
            cnt++;
        }
    }
    if (cnt != n) {
        cout << "NO\n";
    } else
        cout << "YES\n";
}