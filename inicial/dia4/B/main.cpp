#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

#define ff first
#define ss second
#define ll long long

bool comparison(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    return a.ff < b.ff;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<ll, ll> Chem;
    while (n--) {
        ll a, x;
        cin >> a >> x;
        Chem[a] = x;
    }

    int m;
    cin >> m;
    while (m--) {
        ll b, y;
        cin >> b >> y;
        if (Chem[b] < y) Chem[b] = y;
    }
    ll total = 0;
    for (auto iter = Chem.begin(); iter != Chem.end(); iter++) {
        total += (iter -> second);
    }
    cout << total << "\n";
}

