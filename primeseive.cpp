#include <iostream>
using namespace std;
 
// prime seive and optimization


void primeSeive(int *p,int n){
    p[1] = p[0] = 0;
    p[2] =1;


    // mark all the numbers as prime(initialization)
for(int i=3; i<=n;i+=2){
p[i] =1;
}
// seive login to mark all prime numbers as zero
// optimization :   iterate only over odd numbers
for(int i=3; i<=n; i+=2){
        if(p[i]){
            for(int j=i*i; j<=n; j+=2*i){
                p[j] = 0;
            }
        }
}
return;
}
int main() {
 int N = 10000000;
int p[N+1] = {0};
int n=100;

primeSeive(p,n);
for(int i=0;i<100; i++){
    if(p[i]){
        cout<<i<<" ";   
    }
}
return 0;
}
