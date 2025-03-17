// to left rotate in 1 th position
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];

    for(int i=1; i<n; i++)
    {
        arr[i-1]= arr[i];
    }
    arr[n-1]=temp;
    return arr;

}
//// to left rotate in k th position
//vector array don't have return value
class Solution {
public:
    void rotateLeft(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1 || k == 0) return;
        k = k % n;

        // Store first k elements
        vector<int> temp(k);
        for(int i = 0; i < k; i++) {
            temp[i] = nums[i];
        }

        // Shift remaining elements left by k positions
        for(int i = k; i < n; i++) {
            nums[i - k] = nums[i];
        }

        // Place stored elements at the end
        for(int i = 0; i < k; i++) {
            nums[n - k + i] = temp[i];
            //or nums[i+k+1] = temp[i]
        }
    }
};
//optimized
//123 4567 -> 4567123
class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        
        // If k is greater than the size, take the modulus
        k = k % n;

        // Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);// 321 4567
        
        // Reverse the remaining n-k elements
        std::reverse(nums.begin() + k, nums.end());// 321 7654
        // Reverse the entire array
        std::reverse(nums.begin(), nums.end());//4567123
    }
};
//without vector for d instad of k
reverse(arr, arr+d);
reverse(arr+d, arr+n);
reverse(arr, arr+n);
