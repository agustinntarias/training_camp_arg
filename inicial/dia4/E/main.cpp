#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

#define ff first
#define ss second

bool comparison(const pair<int, int> &a, const pair<int, int> &b) {
    return a.ss < b.ss;
}

int main() {
    int n;
    scanf("%d", &n);
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        arr[i] = make_pair(l, r);
    }
    sort(arr, arr+n, comparison);
    int counter = 1;
    int i = 0;
    while (i < n) {
        int end = arr[i].ss;
        int j = i+1;
        while (j < n && arr[j].ff <= end) j++;
        if (j < n) counter++;
        i = j;
    }
    printf("%d\n", counter);
}

