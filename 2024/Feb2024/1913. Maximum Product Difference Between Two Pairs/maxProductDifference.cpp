class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        // First we need to sort the array.
        // The maximum difference would be difference of product of two max and two min elements
        int n = nums.size();
        // Find the size of the array in order to get the direct access of elements
        
        int c = nums[0] * nums[1];
        // product of minimum elements after sorting
        int d = nums[n-1] * nums[n-2];
        // Product of maximum elements after sorting

        // Finally result equals difference of product of maximum and minimum elements.
        int result = d - c;

        // Finally return the result
        return result;
        
    }
};