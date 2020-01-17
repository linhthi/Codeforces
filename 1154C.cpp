#include <bits/stdc++.h>
using namespace std;

int a, b, c;
vector<int> fd = {0, 1, 2, 0, 2, 1, 0};

int cal(int x) {
    int t[3];
    t[0] = a;
    t[1] = b;
    t[2] = c;
    int res = 0;
    while (1) {
        if (t[fd[x]] == 0) break;
        res++;
        t[fd[x]]--;
        x = (x + 1) % 7;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;

    int res = 0;
    while (a > 3 && b > 3 && c > 3) {
        a -= 3;
        b -= 2;
        c -= 2;
        res += 7;
    }

    int r = 0;
    for (int i = 0; i < 7; i++) {
        r = max(r, cal(i));
    }
    cout << r + res << endl;
    return 0;
}