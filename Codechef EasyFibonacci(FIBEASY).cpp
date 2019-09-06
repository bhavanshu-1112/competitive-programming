#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reduce(int d,int n){
	int e[n];
	if(sizeof(d)==1){
		return d[0];
	}else{
		for(int i=0; i<n;i++){
		if(i%2==0){
			e[i/2] = d[i];
		}
			
	}
	return reduce(e,n/2);

	}
}
int fib(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fib(n-1) + fib(n-2);
	}
	
}

int main(){
	int t;
	int n,f;
	cin>>t;
	
	while(t--){
		cin>>n;
	int d[n+1];
		for(int i=0; i<n ;i++){
		
			f= fib(i);
			
		    f= f%10;
		   	 d[i] = f;	
		
		}
		if(sizeof(d)>=2){
			int r = reduce(d,n);
		cout<<r<<endl;
		}else{
			cout<<d[0]<<endl;
		}
		
	}
}
