// here is the link of the question
//https://leetcode.com/problems/two-sum/ 


#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int>s;
        vector<int>result;
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++){
            x=target-nums[i];
            if(s.find(x)!=s.end()){
                result.push_back(i);
                result.push_back(s[x]);
                return result;
            }
            s[nums[i]]=i;
            
        }
        return {-1,-1};
    }

int main(){
  vector<int>nums={1,2,3,4,5}; //here i have hard coded the values but you can take values on your own
  int target=5;
  auto ans=twoSum(nums,target);
  cout<<ans[0]<<" "<<ans[1];
  return 0;}
