// This solution is just a bruteforce approach to solve a problem
class Solution {
public:

    bool check(string &s, int i , int j){

        if(i > j){
            return true;
        }
        if(s[i] == s[j]){
            return check(s, i+1, j-1);
        }
        return false;
    }
    int countSubstrings(string s) {

        int n = s.size();

        int count = 0; 
        // if(n == 1){

        //     return 1;
        // }
        for(int i = 0; i < n; i++){

            for(int j = i; j < n; j++){

                if(check(s, i, j)){

                    count++;
                }
            }
        }
        return count;
        
    }
};