#include <set>
#include <iostream>
using namespace std;
#define ff first
#define ss second
#define mk make_pair
#define forn(x, n) for(int x = 0; x < n; x++)

int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    int a, b;
    scanf("%d%d", &a, &b);
    set<pair<int,int>> clients;
    forn(i, n) {
        int x, y;
        scanf("%d%d", &x, &y);
        clients.insert(mk(a*x+b*y, i+1));
    }
    auto it = clients.begin();
    int number = 0;
    while (d > 0 && it != clients.end()) {
        d -= (*it).ff;
        number++;
        it++;
    }
    if (d < 0) {
        it--;
        number--;
    }
    printf("%d\n",  number);
    for(auto i = clients.begin(); i != it; i++) {
        printf("%d ", (*i).ss);
    }
    printf("\n");
}
