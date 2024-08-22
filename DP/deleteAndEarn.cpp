#include<bits/stdc++.h>
using namespace std;


//              Space Optimised Code
int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];

        sort(nums.begin(),nums.end());

        int maxi = nums[n-1];

        vector<int>prev(maxi+1,0) , curr(maxi+1 , 0);

        for(int del=0;del<=maxi;del++){
            if(nums[0]!=del) prev[del] = nums[0];
            else prev[del] =  0;
        }

        for(int idx=1;idx<n;idx++){
            for(int del = 0;del<=maxi;del++){
                int pick = INT_MIN;
                if(nums[idx]!=del) pick = nums[idx] + prev[max(0,nums[idx]-1)];
                int notPick = 0 + prev[del];
                curr[del] = max(pick,notPick);
            }
            prev = curr;
        }

        return prev[0];
}