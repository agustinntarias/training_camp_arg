#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

bool isPrime(int n) {
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}



int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> primes;
    primes.push_back(2);
    for(int i = 3; i <= n; i+=2) {
        if (isPrime(i)) primes.push_back(i);
    }
    int c = 0;
    for(int k = 0; k < primes.size() - 1; k++) {
        if (binary_search(primes.begin(), primes.end(), 1 + primes[k] + primes[k+1])) c++;
    }
    if (c >= k) printf("YES\n");
    else printf("NO\n");
}
