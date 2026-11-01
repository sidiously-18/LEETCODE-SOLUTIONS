#include<iostream>

using namespace std ;

class Solution {
public:
    bool isPalindrome(string s) {
        string S1 ;
        string S2 ;

        

        for ( int i = 0 ; i < s.length(); i ++){
            s[i]=tolower(s[i]);
            if (isalnum(s[i])){
                S1 += s[i];
            }
        }
        for (int i = s.length()-1;i >= 0 ; i -- ){
               

            s[i]=tolower(s[i]);
            if (isalnum(s[i])){
                S2 += s[i];
            }
        }
        if (S1 == S2){

            return true ;
        }
        else return false ;
        
    }
};
