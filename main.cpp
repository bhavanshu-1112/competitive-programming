#include <iostream>
using namespace std;


int main() {
	float num = 365;
	float denom = 365;
	// p denotes the prob of same ppl having bday on same date
	float p =1;
	// n denotes number of people needed
	int n=0;
	 // p becomes less than 0.5 bcoz we are startting from 1
	 while(p>0.5){
	 	p = p*(num/denom);
	 	num--;
	 	n++;
	 	cout<<"probablity is 	"<<p<<"and" << "no pf people are "<< n<< endl;
		  
	 }
	return 0;
}
