#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main() {
    string x = "hello";
    string s;
    cin >> s;
    int i = 0;
    for(int j = 0; j < s.size(); j++) if (s[j] == x[i]) i++;
    if (i == x.size()) printf("YES\n");
    else printf("NO\n");
}

