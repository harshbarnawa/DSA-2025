#include <iostream>
using namespace std;

int insertFx(int arr[], int n, int cap, int poss,int num) {

    if(n == cap) {
        return n;
    }
    int idx = poss - 1;
    for(int i = n - 1;i >= idx;i--){
        arr[i + 1] = arr[i];

    }
    arr[idx] = num;
    return (n + 1);
}

int main() {
    int arr[] = {20, 3, 4};
    int n = 3;
    int cap = 5;
    int poss, num;
    cin >> poss;
    cin >> num;

    int result = insertFx(arr, n, cap, poss, num);
    cout << result << endl;

    for(int i = 0;i < 4;i++){
        cout << arr[i] << " ";
    }
    return 0;

}