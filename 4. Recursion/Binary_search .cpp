#include <iostream>
using namespace std;
int  BinarySearch(int arr[], int start , int end ,int x){
     
    if(start>end)
    return 0;
  
    int mid =  start+ (end-start)/2;
  
    if(arr[mid] == x)
    return mid;
    else if(arr[mid]<x)
    return BinarySearch(arr, mid+1, end,x);// right side = start = mid+1
    else
    return BinarySearch(arr,start, mid-1,x); //lrft side = end = mid-1
}
int main() {
    int arr[] ={2,4,6,8,10,12};
    int x=8;
    cout<< BinarySearch(arr, 0, 5 , x)<<endl;

    return 0;
}
