#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

#define ll long long

ll max_diff(ll a[], int n) {
    ll max_diff = abs(a[n-1] - a[0]);
    for (int i = 0; i < n-1; i++) {
        if (abs(a[i+1] - a[i]) > max_diff) max_diff = abs(a[i+1] - a[i]);
    }
    return max_diff;
}


int main() {
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a[i] = x;
    }

    ll max_arr[n];
    copy(a, a+n, max_arr);
    ll min_max_dif = max_diff(a, n);
    // DBG(min_max_dif);
    while (next_permutation(a, a+n)){
        // cout << "array: " << endl;
        // for (auto x: a) cout << x << " ";
        // cout << endl;
        ll diff = max_diff(a, n);
        // DBG(diff);
        if (diff < min_max_dif) {
            min_max_dif = diff;
            copy(a, a+n, max_arr);
        }
    }
    // cout << "MAXIMUM ARRAY:" << endl;
    for (auto x: max_arr) cout << x << " ";
    cout << endl;
    // cout << "MAXIMUM value:" << endl;
    // DBG(min_max_dif);
}

