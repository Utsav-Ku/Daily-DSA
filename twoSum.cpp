#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                if(nums[i]+nums[j]==target && i!=j){
                    vector<int> u={i,j};
                    return u;
                }
            }
        }
        vector<int> err={404};
        return err;
}