#include<bits/stdc++.h>
using namespace std;
    
//Top to down approach(Memoization)
/*
int fib(int n, vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
 
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
 cout<<fib(n,dp);
return 0;
}
*/

//TC: O(n) and SC:O(2n) dp array + call stack

//Bottom to Up approach(Tabulation)
/*
int main(){
    int n;
    cin>>n;
    int dp[n+1];
    dp[0]=0, dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<< dp[n];
    return 0;
}
    TC: O(n)
    SC: O(n) dp array
*/