#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> nums = {1,3,4,8,7,9,3,5,1};
    vector<vector<int>> result;
    int k = 2;

    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i += 3){ // incrementing i by 3 here was a good idea here!!

        if(nums[i+2] - nums[i] > k){
            return{};
            // here we return without doing anything as it is a wrong case

        }
        result.push_back({nums[i], nums[i+1], nums[i+2]});
        // pushing a vector in a single go!!
    }
    int m = result.size();
    int o = result[0].size();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < o; j++){
            cout<<result[i][j]<<" ";
        }cout<<" ";
    }
}