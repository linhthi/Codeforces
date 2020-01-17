#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
 
const int A_MAX = 1e7 + 5;
 
int N;
vector<int> A;
vector<int> freq(A_MAX, 0);
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> N;
    A.resize(N);
 
    for (auto &a : A) {
        cin >> a;
        freq[a]++;
    }
 
    long long best = (long long) A_MAX * A_MAX;
    int best_a = -1, best_b = -1;
 
    for (int g = 1; g < A_MAX; g++) {
        int a = -1, b = -1;
 
        for (int i = g; i < A_MAX; i += g) {
            int fr = freq[i];
 
            while (fr > 0 && b < 0) {
                if (a == -1)
                    a = i;
                else
                    b = i;
 
                fr--;
            }
        }
 
        if (b < 0)
            continue;
 
        assert(a % g == 0 && b % g == 0);
        long long lcm = (long long) a * b / g;
 
        if (lcm < best) {
            best = lcm;
            best_a = a;
            best_b = b;
        }
    }
 
    int a_index = -1, b_index = -1;
 
    for (int i = 0; i < N; i++)
        if (a_index < 0 && A[i] == best_a) {
            a_index = i;
        } else if (b_index < 0 && A[i] == best_b) {
            b_index = i;
        }
 
    if (a_index > b_index)
        swap(a_index, b_index);
 
    cout << a_index + 1 << ' ' << b_index + 1 << '\n';
}