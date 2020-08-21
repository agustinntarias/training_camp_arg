#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main() {
    int X[4];
    scanf("%d%d%d%d", &X[0], &X[1], &X[2], &X[3]);
    sort(X, X+4);
    printf("%d %d %d\n", X[3] - X[0], X[3] - X[1], X[3] - X[2]);
}

