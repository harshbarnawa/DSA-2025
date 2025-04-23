#include <iostream>
using namespace std;

int addNum(int arr[],int x,int pos,int n,int cap){
    if (n == cap){
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1;i >= idx;i--) {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}
int main() {
    int arr[5] = {4, 7, 13, 21};
    int cap = 5;
    int n = 4;
    int x = 9;
    int pos = 3;

    int result = addNum(arr,x,pos,n,cap);

    for(int i = 0;i < result;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}