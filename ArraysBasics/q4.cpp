#include <iostream>
using namespace std;

int deleteFx(int arr[],int n,int x){

    int i;
    for (int i = 0; i < n;i++) {
        if(arr[i]==x){
            break;
        }
        if(i==n){
            return n;
        }
        for(int j=i;j < n - 1; j++){
            arr[j] = arr[j+1];
        }
        return(n - 1);
    }

}
int main() {
    int arr[] = {3, 8, 12, 5, 6};
    int x = 12;
    int n = 5;

    int result = deleteFx( arr, n, x);

    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    
}