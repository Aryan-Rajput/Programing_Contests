#include <bits/stdc++.h>
using namespace std;


// 3280. Convert Date to Binary
class Solution {
public:
    string convertDateToBinary(string d) {
        string ans = "";
        int a1 = stoi(d.substr(0,4));
        int a2 = stoi(d.substr(5,2));
        int a3 = stoi(d.substr(8,2));
        string s1;
        string s2;
        string s3;
        while(a1){
            if(a1%2==0){
                s1='0'+s1;
            }else{
                s1='1'+s1;
            }
            a1 = a1/2;
        }
        while(a2){
            if(a2%2==0){
                s2='0' + s2;
            }else{
                s2='1' + s2;
            }
            a2 = a2/2;

        }
        while(a3){
            if(a3%2==0){
                s3='0' + s3;
            }else{
                s3='1' + s3;
            }
            a3 = a3/2;
        }
        // cout<<s1<<" "<<s2<<" "<<s3;
        return s1+"-"+s2+"-"+s3;
    }
};
    int main() {
        Solution solution;
        string test = "2022-05-01";
        cout << solution.convertDateToBinary(test);
        return 0;
    }