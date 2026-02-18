// ******** Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. ********

// <======== Example ========>
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int start = 1;
        int end = 1;

        for(int i = 0; i < n; i++) {
            ans[i] = ans[i] * start;
            start = start * nums[i];
            ans[n-i-1] = ans[n-i-1] * end;
            end = end * nums[n-i-1];
        }

        return ans;
    }
};