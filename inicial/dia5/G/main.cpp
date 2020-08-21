#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    if (m % n != 0) printf("-1\n");
    else {
        int moves = 0;
        int x = m/n;
        while (x % 2 == 0) {
            x/=2;
            moves++;
        }
        while (x % 3 == 0) {
            x/=3;
            moves++;
        }
        if (x != 1) printf("-1\n");
        else printf("%d\n", moves);
    }
}

