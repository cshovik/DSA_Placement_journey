#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int x, int index, int n){
    
    if(index == n)
    return 0;
    
    if(arr[index]== x){
        return 1;
    }
    
    return LinearSearch(arr,x,index+1,n);
}
int main() {
    int arr[] ={2,3,6,7,8};
    int x=7;
    cout<< LinearSearch(arr, x, 0, 5)<<endl;

    return 0;
}
