#include <bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < n; ++i)
using namespace std;


int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int denied = 0, c = 0;
    forn(i, n) {
        int t;
        scanf("%d", &t);
        if (t==1) {
            if (a>0) a--;
            else if (b>0) {
                b--;
                c++;
            } else if (c > 0) c--;
            else denied++;
        } else {
            if (b > 0) b--;
            else denied += 2;
        }
    }
    printf("%d\n", denied);
}
