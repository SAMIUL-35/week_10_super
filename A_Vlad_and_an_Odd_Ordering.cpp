#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main() {
    op();
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll mid = (n + 1) / 2;
        ll c = mid, b = 0;
        while (k > mid && mid) {
            k -= mid;
            mid = (n - c + 1) / 2;
            c += mid;
            b++;
        }
        cout << ((1LL << b) + (k - 1) * (1LL << (b + 1))) << endl;
    }
    return 0;
}
