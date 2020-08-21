#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

bool paircompare(const pair<int, int> a, const pair<int, int> b) {
    if (a.second == b.second) return a.first > b.first;
    else return a.second > b.second;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<pair<int,int>> cards;
    while(n--) {
        int x, y;
        scanf("%d%d", &x, &y);
        cards.push_back(make_pair(x, y));
    }
    // for(auto x: cards) cout << x.first << " " << x.second << endl;
    // cout << endl;
    sort(cards.begin(), cards.end(), paircompare);
    // for(auto x: cards) cout << x.first << " " << x.second << endl;
    // cout << endl;

    int points = 0;
    int moves = 1;
    for (int i = 0; i < cards.size() && moves != 0; i++) {
        // DBG(moves);
        points+=cards[i].first;
        moves+=cards[i].second;
        moves--;
    }
    printf("%d\n", points);

}

