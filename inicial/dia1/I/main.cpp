#include <iostream>
#include <vector>
using namespace std;

void imprimir_resultado(vector<int> &a, int n) {
    bool hay_impar = false;
    bool hay_par = false;
    for (int x: a) {
        if (x%2 == 0) {
            hay_par = true;
        } else {
            hay_impar = true;
        }
    }
    if (n % 2 == 0) {
        if (hay_impar && hay_par) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        if (hay_impar) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    cout << endl;
}



int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        vector<int> a;
        for(int j = 0; j < n; j ++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        imprimir_resultado(a, n);
    }
    return 0;
}
