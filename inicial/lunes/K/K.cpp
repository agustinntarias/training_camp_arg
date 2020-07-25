#include <iostream>
#include <string>
using namespace std;

void imprimir_resultado(string &b) {
    string a;
    int n = b.size();
    for(int i = 0; i < n-1; i+=2) {
        a += b[i];
    }
    if (n%2 == 1){
        a += b[n-2];
    }
    a += b[n-1];
    cout << a;
}



int main() {
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i ++) {
        string s;
        getline(cin, s);
        imprimir_resultado(s);
        cout << endl;
    }
    return 0;
}
