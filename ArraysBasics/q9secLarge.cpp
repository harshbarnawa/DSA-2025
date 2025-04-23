#include <iostream>
using namespace std;
int large(int arr[],int n){
    int largest = 0;
    for(int i = 0;i < n;i++){
        if(arr[i]>largest){
            largest = i;
        }
    }
    return largest;
}
int secLarge(int arr[],int n,int largest){
    int getLargest = largest;
    int res = -1;
    for(int i = 0;i < n;i++) {
        if(arr[i]!=arr[getLargest]){
            res=i;
        } else if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}
int main() {
    int arr[5] = {5, 20, 12, 20, 10};
    int n = 5;

    int largest = large(arr,n);
    int secLargest = secLarge(arr, n, largest);
    cout << largest << endl;
}