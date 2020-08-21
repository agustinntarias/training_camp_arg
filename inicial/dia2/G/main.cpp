#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main(){
    int a, b, s;
    scanf("%d%d%d", &a, &b, &s);
    a = abs(a); b = abs(b);
    if (s >= a+b && (s-a-b) % 2 == 0) printf("Yes\n");
    else printf("No\n");
}
