// ******** Given an integer array nums, find the subarray with the largest sum, and return its sum. ********

// <======== Example ========>
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

// Input: nums = [1]
// Output: 1

// Input: nums = [5,4,-1,7,8]
// Output: 23


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(sum < 0) {
                sum = 0;
            }

            sum += nums[i];
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};