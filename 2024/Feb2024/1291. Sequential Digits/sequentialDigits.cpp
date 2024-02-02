class Solution {
public:
// This is legit not a perfect implementation of today' s leetcode POTD
// But as all the no. comes into a finite array so why not!!
    vector<int> sequentialDigits(int low, int high) {

        vector<int> v;

        vector<int> sd = {12, 23 , 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789, 1234, 
        2345, 3456, 4567, 5678, 6789, 12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678,
        3456789, 12345678, 23456789, 123456789 };

        int n = sd.size();
        // Time Complexity : O(n)

        for(int i = 0; i < n; i++){

            if(sd[i] < low){
                continue;
            }
            if(sd[i] > high){
                continue;
            }
            v.push_back(sd[i]);

        }
        return v;
        
    }
};
