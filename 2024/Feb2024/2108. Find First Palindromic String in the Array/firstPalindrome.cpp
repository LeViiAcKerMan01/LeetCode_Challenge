class Solution {
public:

    string reverse(string temp){

        int n = temp.size();
        string b;
        stringstream ss;
        for(int i = n-1; i >= 0; i-- ){

            ss << temp[i];
        }
        ss >> b;

        return b;
    }
    string firstPalindrome(vector<string>& words) {

        int n = words.size();
        bool isPal = false;
        string result;
        
        for(int i = 0; i < n; i++){

            string temp = words[i];

            string tempo = reverse(temp);
            
            if(temp == tempo){
            isPal = true;
                result = temp;
                break;
            }
        }
        if(isPal == false){

            result = "";
        }
        return result;
    }
};