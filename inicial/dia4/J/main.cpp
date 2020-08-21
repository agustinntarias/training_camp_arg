#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main(){
    int x[3];
    scanf("%d%d%d", &x[0], &x[1], &x[2]);
    sort(x, x+3);
    printf("%d\n", x[2] - x[0]);
}
