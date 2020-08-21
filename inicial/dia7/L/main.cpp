    #include <bits/stdc++.h>
    using namespace std;

    #define DEBUG 1 // change this to 0 to disable DEBUG mode
    #if DEBUG == 1
    #define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
    #else
    #define DBG(x)
    #endif


    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        long long n;
        cin >> n;
        string a = to_string(n);
        int m = count_if(a.begin(), a.end(), [](char c){return c == '4' || c == '7';});
        string s = to_string(m);
        if (all_of(s.begin(), s.end(), [](char c){return c == '4' || c == '7';})) cout << "YES\n";
        else cout << "NO\n";

    }

