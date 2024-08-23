#include<bits/stdc++.h>
using namespace std;

bool solve(int idx,int sum,vector<int>arr,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(idx==0) return arr[0]==sum;
        if(dp[idx][sum]!=-1){
            return dp[idx][sum];
        }
        int take = 0;
        if(sum>=arr[idx])
        take = solve(idx-1,sum-arr[idx],arr,dp);
        int notTake = solve(idx-1,sum,arr,dp);
        return dp[idx][sum] = take||notTake;
}

bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        
        return solve(n-1,sum,arr,dp);
}