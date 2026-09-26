// problem no 139. leetcode
 // this repo solves the famous Single number problem 
 //this was the question "Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space." 
// and its solution goes as 
#include<iostream>
#include<vector>
using namespace std;
  class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int  ans = 0 ;
        for (int val :nums){
            ans = ans ^ val;
        }
        return ans ;
        
    }
};

// here we used XOR operator because in a array since a number repeats twice xoring all of the array will eliminate the similar integers
// and thats how we get our ans
