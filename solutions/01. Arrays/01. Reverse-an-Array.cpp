// ******** You are given an array of integers arr[]. You have to reverse the given array. ********
// Note --> Modify the array in place.

// <======== Example ========>
// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]

// Input: arr = [4, 5, 2]
// Output: [2, 5, 4]

// Input: arr = [1]
// Output: [1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};