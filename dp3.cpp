#include<bits/stdc++.h>
#include <iostream>
using namespace std;



// space optimization
 int fibSpaceOpt(int n){
    if(n==0 or n==1){
        return n;
    }
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c = a+b;
        a =b;
        b =c;

    }
return c;
 }

int main() {
  int n;
  cin>>n;
  cout<<fibSpaceOpt(n)<<endl;
}
