#include <iostream>

using namespace std;

void imprimir_resultado(int &a, int &b) {
    if (a==b) {
        cout << 0;
    } else if ((b-a) % 2 == 0) {
        if (a > b) {
            cout << 1;
        } else {
            cout << 2;
        }
    } else {
        if (a > b) {
            cout << 2;
        } else {
            cout << 1;
        }
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i ++) {
        int a, b;
        cin >> a >> b;
        imprimir_resultado(a, b);
    }
    return 0;
}
