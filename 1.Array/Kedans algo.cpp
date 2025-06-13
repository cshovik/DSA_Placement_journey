// Maximum sum Subarray
//Leetcode: https://leetcode.com/problems/maximum-subarray/description/
// Array: 4  2  3  -6  -12  10
// prefix = 4+2=6 , maxi=6,  prefix = 6+3=9, maxi(9,6)=9, prefix =9-6=3, maxi(9,3)=9, prefix = 9-12=-3 <0 -> prefix=0, prefix =0+10=10 , maxi(9,10)=10
// ans =10
class Solution {

public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN, prefix =0;
        int n = nums.size();

        for (int i=0; i<n; i++)
        {
            prefix += nums[i];
            maxi = max(prefix,maxi);

            if(prefix <0)
            {
                prefix =0;

            }
        }
        return maxi;
    }
};
