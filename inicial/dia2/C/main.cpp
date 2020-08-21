#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main(){
    int n, p;
    scanf("%d%d", &n, &p);
    char records[n];
    cin >> records;
    int i = 0;
    bool no = true;
    for (int i = 0; i + p < n; i ++) {
        if ((records[i] == '1' && records[i+p] == '0') || (records[i] == '0' && records[i+p] == '1'))
            no = false;
    }
    if (no) {
        while (records[i] != '.') i++;
        if (i + p < n) {
            if (records[i+p] != '.') {
                int x = records[i+p] - '0';
                x = 1-x;
                if (x == 1) records[i] = '1';
                else records[i] = '0';
            } else {
                records[i] = '1';
                records[i+p] = '0';
            }
            no = false;
        } else {
            int j = n-1;
            while (records[j] != '.') j--;
            if (j - p >= 0) {
                if (records[j-p] != '.') {
                    int x = records[j-p] - '0';
                    x = 1-x;
                    if (x == 1) records[j] = '1';
                    else records[j] = '0';
                } else {
                    records[j] = '1';
                    records[j-p] = '0';
                }
                no = false;
            }
        }
    }
    if (!no) {
        for (int k = 0; k < n; k++) {
            if (records[k] == '.') records[k] = '0';
        }
        for (auto x: records) cout << x;
        cout << "\n";
    } else printf("No\n");
}
