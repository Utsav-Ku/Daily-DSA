#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int solve(int day,int last,vector<vector<int>>&arr,vector<vector<int>>&dp){
        if(dp[day][last]!=-1){
            return dp[day][last];
        }
        if(day==0){
            int maxi = 0;
            for(int i=0;i<=2;i++){
                if(i!=last)
                maxi = max(maxi,arr[0][i]);
            }
            return dp[day][last] = maxi;
        }
        
        int maxi = 0;
        for(int i=0;i<=2;i++){
            if(i!=last){
                int activity = arr[day][i] + solve(day-1,i,arr,dp);
                maxi = max(maxi,activity);
            }
        }
        
        dp[day][last] = maxi;
    }
    int maximumPoints(vector<vector<int>>& arr, int n) {

        vector<vector<int>>dp(n,vector<int>(4,-1));
        return solve(n-1,3,arr,dp);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr, n) << endl;
    }
    return 0;
}
