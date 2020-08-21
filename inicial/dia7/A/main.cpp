#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int partial[n];
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        a[i] = x;
    }
    partial_sum(a, a+n, partial);
    int m;
    scanf("%d", &m);
    while(m--) {
        int q;
        scanf("%d", &q);
        int count = 0;
        while(count < n && partial[count] < q) {
            count++;
        }
        printf("%d\n", count + 1);
    }
}

