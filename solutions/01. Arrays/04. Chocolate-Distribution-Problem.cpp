// ******** Given an array arr[] of positive integers, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets among m students such that - Each student gets exactly one packet. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum and return that minimum possible difference. ********

// <======== Example ========>
// Input: arr = [3, 4, 1, 9, 56, 7, 9, 12], m = 5
// Output: 6

// Input: arr = [7, 3, 2, 4, 9, 12, 56], m = 3
// Output: 2

// Input: arr = [3, 4, 1, 9, 56], m = 5
// Output: 55


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        int ans = INT_MAX;
        int start = 0;
        int end = m-1;
        sort(a.begin(), a.end());
        
        while(end < n) {
            ans = min(ans, a[end]-a[start]);
            start++;
            end++;
        }
        
        return ans;
    }
};