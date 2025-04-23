#include <iostream>
using namespace std;
int delet(int arr[],int del,int n) {
    int i;
    for (i = 0;i < n;i++) {
        if(arr[i] == del){
            break;
        }
        
    }
    if(i == n){
        return n;
    }
    for(int j = i;j < n - 1;j++){
        arr[j] = arr[j + 1];
        
    }
    return (n - 1);
}
int main() {
    int arr[5] = {3, 8, 12, 5, 6};
    int n = 5;
    int del = 8;

    n = delet(arr, del,n);
    cout << "Updated size of arr: " << n << endl;
    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}