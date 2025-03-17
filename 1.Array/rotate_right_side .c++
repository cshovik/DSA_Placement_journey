//for k steps rotation , k= 1,2,3... means 1 step right rotate , 2 step right rotate but k<arr.size()
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n= nums.size();
      for(int j=0; j<k; j++)
      {
        int temp = nums[n-1];

          for(int i=n-2; i>=0; i--)
          {
            nums[i+1]= nums[i];
          }
        nums[0]=temp;
      }

    }
    
};
// t.C: o(n+k)  S.C: o(K)
//now to handle also k>arr.size() ex: arr=[1 2 3] k=4
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        
        k= k %n;

        vector<int> temp(k);
        for(int i=0; i<k; i++)
        {
            temp[i]= nums[n-k+i];   //create temp array 
        }
        //shift elimenet right by k position
        for(int i = n-1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        
        for(int i=0; i<k; i++){
                nums[i]= temp[i]; // shift temp array from nums array
        }
    
     
    }
};
//more optimized ,time complexity : 2n not better than previous , Space complexity: o(1) more optimized
//1234567 -> 5671234
class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        
        // If k is greater than the size, take the modulus
        k = k % n;

        // Reverse the entire array
        std::reverse(nums.begin(), nums.end());// 765 4321
        
        // Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);//567 4321
        
        // Reverse the remaining n-k elements
        std::reverse(nums.begin() + k, nums.end());//567 1234
    }
};
