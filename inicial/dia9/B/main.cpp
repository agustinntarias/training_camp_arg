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
    cin >> s;
    int n = s.size();
    bool pal = true;
    for(int i = 0; i < n; i++) pal &= (s[i] == s[n-1-i]);
    if (pal) {
        int c = 1;
        int i = 0;
        while (i < s.size()/2 - 1 && s[i] == s[i+1] && s[i] == s[n-i-1]) i++;
        if(i == s.size()/2 - 1) cout << 0 << endl;
        else cout << s.size() - i - 1 << endl;
    } else {
        cout << n << endl;
    }

}

