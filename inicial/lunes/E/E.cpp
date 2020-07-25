#include <iostream>
#include <numeric>
using namespace std;


void imprimir_resultado(int arr[], int n) {
    int partial[n];
    partial_sum(arr, arr + n, partial);
    if (arr[0] >= partial[n-1] - partial[0]) {
        cout << 1 << " " << n-1 << endl;
    } else {
        int k = 1;
        while (k < n && partial[k] < partial[n-1] - partial[k]) {
            k++;
        }
        if (partial[k-1] <= partial[n-1] - partial[k]) {
            cout << k+1<< " " << n-k-1 << endl;
        } else {
            cout << k << " " << n-k << endl;
        }
    }

}



int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int j = 0; j < n; j ++) {
        int x;
        cin >> x;
        arr[j] = x;
    }
    imprimir_resultado(arr, n);
    return 0;
}
