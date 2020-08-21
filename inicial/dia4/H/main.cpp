#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main() {
    string s;
    string t;
    cin >> s;
    cin >> t;
    int i = 0, k = 0;
    while(k < s.size() && i < t.size()) {
        if (s[k] == t[i]) k++;
        i++;
    }

    int j = t.size()-1; k = s.size() - 1;
    while(k >= 0 && j >= i) {
        if (s[k] == t[j]) k--;
        j--;
    }
    if (j >= i) printf("%d\n", 2+j-i);
    else printf("0\n");
}

