#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int min,max;
	int a1,a2,k1,k2,n;
	cin>>a1>>a2>>k1>>k2>>n;
	if(n<(a1*k1)+(a2*k2)){
	
			if(a1>a2){
		  int r = (n-(a1*k1))/k2;
		  max= r+a1;
		  min = (a2+k2)-max;
		}else{
			int r = (n-(a2*k2))/k1;
			max = r+a2;
			min = (a2+k2)-max;
		}
		
		
	}
	
	else if(n==(a1*k1)+(a2*k2)){
		if(a1>a2){
		  int r = (n-(a1*k1))/k2;
		  max= r+a1;
		  min = (a2+k2)-max;
		}else{
			int r = (n-(a2*k2))/k1;
			max = r+a2;
			min = (a2+k2)-max;
		}
	}
	cout<<min<<" "<<max;
	return 0;
}
