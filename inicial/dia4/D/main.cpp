#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main() {
    int a, b;
    scanf("%d:%d", &a, &b);
    a %= 12;
    int y = 6*b;
    if (b % 2 == 0) {
        int x = (60*a+b)/2;
        printf("%d %d\n", x, y);
    } else {
        float x = (float)(60*a+b)/2;
        printf("%.1f %d\n", x, y);
    }
}

