#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        nums = {2,7,11,15} ;
        target = 9 ;
     

         for (int i=0 ; i < 4 ; i++){
               int a = nums[i] ;

            
            for (int j = 0; j < 4; j++)
            { int b = nums[j] ;
                if ( a + b == target){
                    cout << i << " ," << j << endl;

                }
            
        
            }
            


         }
        
    }
};