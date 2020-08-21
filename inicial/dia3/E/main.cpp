#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int c = 0;
    while (m > n) {
        if (m % 2 == 0) m /= 2;
        else m++;
        c++;
    }
    printf("%d\n", c + n - m);
}
