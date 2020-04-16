//fibbonacci series using dp by top down approach
#include<iostream>
using namespace std;

// top down approach
int fib(int n, int dp[]){
    // base case
    if(n==0 or n==1){
        return n;
    }
     //look up
     if(dp[n]!=0){
         return dp[n];
     }
     int ans;
     ans = fib(n-1) + fib(n-2);
     return dp[n] = ans;
}

int main(){
    int n;
    cin>>n;
    
    int dp[100] = {0};
    cout<<fib(n,dp)<<endl;
}
