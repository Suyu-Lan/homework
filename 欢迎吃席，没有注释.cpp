#include<bits/stdc++.h>
using namespace std;
long long dp[400000][2];
int main(){
    int n;
    cin>>n;
    long long x,y;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(x==1){
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]+y);
            dp[i][0]=dp[i-1][0];
        }else{
            dp[i][1]=dp[i-1][1];
            dp[i][0]=max(max(dp[i-1][0]+y,dp[i-1][1]+y),dp[i-1][0]);
        }   
    }
    cout<<max(dp[n][1],dp[n][0]); 
}
