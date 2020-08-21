#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

size_t abs_dif(size_t x, size_t y) {
    if (x > y) return x - y;
    else return y-x;
}

void can_be_trans(string s, int n, string abc) {
    bool pal = true;
    for (int i = 0; i <= n/2 && pal; i++) {
        pal &= (s[i] == s[n-1-i] || abs_dif(abc.find(s[i]), abc.find(s[n-1-i])) == 2);
    }
    if (pal) printf("YES\n");
    else printf("NO\n");
}


int main(){
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        string str;
        cin >> str;
        can_be_trans(str, n, abc);
    }

}
