#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int sum = 0;
    while (n--) {
        int card;
        scanf("%d", &card);
        sum += card;
    }
    sum = abs(sum);
    DBG(sum);
    int c = 0;
    while (sum > x) {c++; sum-= x;}
    if (sum != 0) {c++;}
    printf("%d\n", c);
}
