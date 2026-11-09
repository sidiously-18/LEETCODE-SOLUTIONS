#include<iostream>
#include<vector>
 using namespace std ;

  vector<int> pairsum (vector<int> nums,int target){
    int n = nums.size();
    int i = 0;
    int j = n - 1 ;
    vector<int> ans;
    while(i<j){
        int pairsum = nums[i] + nums[j];

        if(pairsum > target){
            j-- ;
            continue ;
        }
        else if (pairsum < target ){
            i++ ;
            continue ;
        }
        else if(pairsum == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans ;

        }

        
    }
    return ans ;
  }

  int main (){

    vector<int> sec = {2,3,5,8,10};

    int target = 12 ;

   vector<int> result =  pairsum(sec,target) ;
   for (int i = 0 ; i < result.size() ; i++){
    cout << result[i] << " " ;
   }

    return 0 ;
  }
  