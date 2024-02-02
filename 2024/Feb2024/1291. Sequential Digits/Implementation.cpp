#include<bits/stdc++.h>
using namespace std;

vector<int> sequentialDigits(int low, int high){

    vector<int> v = {12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789, 1234, 2345, 4567, 6789,
    12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678, 3456789, 12345678, 23456789,
    123456789 };

    int n = v.size();
    vector<int> solve;

    for(int i = 0; i < n; i++){

        if(v[i] < low){
            continue;
        }
        if(v[i] > high){
            continue;
        }
        solve.push_back(v[i]);
    }
    return solve;
}

int main()
{

    // Lets create an array of all the sequential digits between low and high
    // Constraints:
    // 10 <= low <= high <= 10^9
    // vector<int> v = {12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789, 1234, 2345, 4567, 6789,
    //  12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678, 3456789, 12345678, 23456789, 123456789 };
    // Note : As the value increases by one digit, the number of repeating elements decreases by 1 number

    // int low, high;
    // cin >> low >> high;
    int low = 100;
    int high = 1000;

    vector<int> v(sequentialDigits(low, high));
    sort(v.begin(), v.end());
    for(auto i : v){
        cout<<i<<endl;
    }
    
    return 0;


    
}