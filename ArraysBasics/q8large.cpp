#include <iostream>
using namespace std;

int large(int arr[],int n){
    int res = 0;
    for(int i = 1;i < n;i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

int main() {
    int arr[5] = {5, 44, 20, 10};
    int n = 4;

    int result = large(arr,n);
    cout << result << endl;
    return 0;
}