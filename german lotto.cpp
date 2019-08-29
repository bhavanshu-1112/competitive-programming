#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
// numbers from 1 to49
// chose numbers a subset of 6 numbers
int n =49;
int count = 0;
for(int i=1; i<n-5; i++){
	for(int j = i+1;j<n-4; j++){
		for(int k=j+1;k<n-3;k++){
			for(int l = k+1; l<n-2;l++){
				for(int m = l+1; l<n-1; l++){
					for(int o=m+1;o<n; o++) {
					 cout<< i<<" "<<j<< " "<<k << " "<<l<< " "<<m<< " "<<o<<endl;
					 count++;
					}
				}
			}
		}
}
}
	return 0;
}
