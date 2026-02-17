// ******** You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. ********

// <======== Example ========>
// Input: prices = [7,1,5,3,6,4]
// Output: 5

// Input: prices = [7,6,4,3,1]
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int start = 0;
        int end = 1;

        while(end < n) {
            if(prices[start] < prices[end]) {
                maxProfit = max(maxProfit, prices[end]-prices[start]);
            } else {
                start = end;
            }
            end++;
        }

        return maxProfit;
    }
};