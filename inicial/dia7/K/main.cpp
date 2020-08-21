#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n;
    scanf("%d", &n);
    vector<int> cards;
    while(n--) {
        int x;
        scanf("%d", &x);
        cards.push_back(x);
    }

    int s = 0, d = 0;
    int a = 0;
    while (!cards.empty()) {

        if (cards[0] > cards.back()) {
            if (a) d += cards[0];
            else s += cards[0];
            cards.erase(cards.begin());
        } else {
            if (a) d += cards.back();
            else s += cards.back();
            cards.erase(cards.end()-1);
        }
        a+=1;
        a%=2;
    }
    printf("%d %d\n", s, d);
}

