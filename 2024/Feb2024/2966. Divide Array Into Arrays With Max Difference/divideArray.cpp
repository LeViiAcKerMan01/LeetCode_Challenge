class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        int n = nums.size();
        int m = n/3;
        int l = 1;
        int j = 0;
        int g = 3;

        

            for( int i = j; i < n; i += 3){
            // Time complexity of this function is O(n)
                if(nums[i+2] - nums[i] > k){
                    return{};
                    // to return without doing anything!!
                }
                result.push_back({nums[i], nums[i+1], nums[i+2]});
                // To push three element in one go in a 2D vector
            }
        return result;
    }
};