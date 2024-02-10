// This is a bottom up approach to solve this problem
// Following problems could be solved by this approach
// 1- count palindromic substrings
// 2- count odd-even length palindromic substrings
// 3- find longest palindromic substring
// 4- find largest palindromic subsequence
class Solution {
public:
    int t[1001][1001];
    bool check(string &s, int i , int j){

        if(i > j){
            return true;
        }
        if(t[i][j] != -1){

            return t[i][j];// 0 false , 1 true
        }
        if(s[i] == s[j]){
            return t[i][j] = check(s, i+1, j-1);
        }
        return t[i][j] = false;
    }
    int countSubstrings(string s) {

        int n = s.length();

        vector<vector<bool>> t(n, vector<bool>(n, false));


        int count = 0;

        for(int L = 1; L <= n; L++){

            for(int i = 0; i+L-1 < n; i++){
                int j = i + L - 1;
                if(i == j){
                    t[i][i] = true;
                }
                else if(i+1 == j){
                    t[i][j] = s[i] == s[j];
                }
                else{
                    t[i][j] = s[i] == s[j] && t[i+1][j-1];
                }

                if(t[i][j] == true){
                    count++;
                }
            }

        }
        return count;
        
    }
};
