#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main(){
    int n;
    scanf("%d", &n);
    int d_min = 2*n;
    for(int i = 1; i*i <= n; i++) if (n % i == 0) {
        int d = i + n/i;
        if (d < d_min) {
            d_min = d;
        }
    }
    printf("%d\n", 2*d_min);
}
