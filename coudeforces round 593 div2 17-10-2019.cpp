#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
int count;
	while(t--){
	    count=0;
		cin>>a>>b>>c;
	while(b>=1){
		     // count =0;
			if(c>=a){
			    //count =0;
				if(b>=1 && c>=2){
					b-=1;
					c-=2;
					count+=3;
				}else{
					a-=1;
					b-=2;
					count+=3;
				}
			}
			else if(a>c && a<b){
			  
			if(a>=1 && b >= 2 ){
			a-=1;
			b-=2;
			count+=3;
		}else{
			b-=1;
			c-=2;
			count+=3;
		}	
			}
			else if(a>c && a>b){
			    		if(b>=1 && c>=2){
					b-=1;
					c-=2;
					count+=3;
				}else{
					a-=1;
					b-=2;
					count+=3;
				}
			}
		
	}
	
	cout<<count<<endl;	
  }
}
