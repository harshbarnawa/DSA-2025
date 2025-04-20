#include <iostream>
using namespace std;

int search(int arr[], int n, int x, int pos, int cap) {
    if(n  == cap){
        return n;
    }
    int idx = pos - 1;
    for(int i = n-1; i >= idx; i--){
    arr[i + 1] = arr[i];
    }
    arr[idx] = x;

    return n + 1;
}

int main() {
    int arr[5] = {5, 7, 10, 20};
    int n = 4;
    int x = 25;
    int pos = 2;
    int cap = 5;
    
    int results = search(arr, n, x, pos, cap);

    cout << results << endl;

    for(int i = 0;i < 5;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}