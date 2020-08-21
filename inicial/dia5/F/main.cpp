#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

#define forn(x, n) for(int x = 0; x < n; x++)

#define ll long long

int main() {
    int n;
    scanf("%d", &n);
    ll A[2][n];
    // read matrix
    forn(i, n) {
        ll h;
        cin >> h;
        A[0][i] = h;
    }
    forn(i, n) {
        ll h;
        cin >> h;
        A[1][i] = h;
    }

    // dp
    ll H[2][n];
    H[0][n-1] = A[0][n-1];
    H[1][n-1] = A[1][n-1];
    // cout << endl;
    for (int k = n-2; k >= 0; k--) {
        // fill first element
        if (A[0][k] + H[1][k+1] > H[0][k+1]) H[0][k] = A[0][k] + H[1][k+1];
        else H[0][k] = H[0][k+1];

        // fill second element
        if (A[1][k] + H[0][k+1] > H[1][k+1]) H[1][k] = A[1][k] + H[0][k+1];
        else H[1][k] = H[1][k+1];
        // forn(i, 2) {
        //     forn(j, n) {
        //         cout << H[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }
    if (H[0][0] > H[1][0]) cout << H[0][0];
    else cout << H[1][0];
}

