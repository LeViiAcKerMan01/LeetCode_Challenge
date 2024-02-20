class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(begin(nums), end(nums));

        int n = nums.size();

        int res;


        for(int i = 0; i < n; i++){

            if(i != nums[i]){

                res = i;
                break;
            }
        }
        return res;
    }
};