#include<iostream>
using namespace std;

void remove(char s[]){
	if(s[0]=='\0'){
		return;
		
	}
	if(s[0]!='x'){
		remove(s+1);
	}else{
		int i=1;
		for(;s[i]!='\0';i++){
			s[i-1] = s[i];
			
		}
		s[i-1] = s[i];
		remove(s);
	}
}
int length(char s[]){
	if(s[0] == '\0'){
		return 0;
	}
	int smallStringLength = length(s+1);
	return 1+ smallStringLength;
	
}
int main(){
	char str[100];
	cin>>str;
	int i = length(str);
	cout<<i<<endl;
	remove(str);
	cout<<str<<endl;
	i  =length(str);
	cout<<i<<endl;
}
