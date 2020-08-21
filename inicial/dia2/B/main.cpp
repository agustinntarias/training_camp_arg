#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++) if (n % i == 0)
        return false;
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    int m = 1;
    while (isPrime(n*m+1)) m++;
    printf("%d\n", m);
}
