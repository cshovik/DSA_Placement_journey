// 124567 , output:3 , use xor concept , take natural value and pit into xor1 1234567 , then array value in xor2 =124567. mow 1^0= 1and 1^1=0 , so xor1^xor2, all will come 0 , only 3 don't have in xor2, it wil; return 3
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int xor1 = 0;
        int xor2 = 0;

        for(int i = 0; i < N; i++) {
            xor1 = xor1 ^ i;       // XOR of indices 0 to N-1
            xor2 = xor2 ^ nums[i]; // XOR of array elements
        }

        xor1 = xor1 ^ N; // Include N in the expected sequence
        return xor1 ^ xor2;
    }
};
