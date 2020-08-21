#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

#define ll long long

ll sqrt(ll x) {
    // base case
    if (x < 2)
        return x;

    // to store floor of sqrt(x)
    ll result;

    // square root of x cannot be more than x/2 for x > 1
    ll start = 1;
    ll end = x/2;

    while (start <= end) {
        // find mid element
        ll mid = (start + end) / 2;
        ll sqr = mid*mid;
        // return mid if x is a perfect square
        if (sqr == x) return mid;
        // if mid*mid is less than x
        else if (sqr < x) {
            // discard left search space
            start = mid + 1;
            // update result since we need floor
            result = mid;
        } else { // if mid*mid is more than x
            // discard right search space
            end = mid - 1;
        }
    }
    // return result
    return result;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll sqrt_a = sqrt(a), sqrt_b = sqrt(b);

    }
}

