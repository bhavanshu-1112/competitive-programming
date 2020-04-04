#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int no_of_transaction, friends;
  cin>>no_of_transaction>>friends;

  int x,y,amount;
//   make a 1-D array to store the net amount that each person will have to take at the end
int net[100000] = {0};
while(no_of_transaction--){
    cin>>x>>y>>amount;
    net[x] -= amount;
    net[y] += amount;

}

multiset<int> m;
// init a list & sort it -> multiset
for(int i=0;i<friends;i++){
    if(net[i]!=0){
        m.insert(net[i]);
    }
}

// pop out two persons (left & right) and try to settle them
int cnt =0;
  while(!m.empty()){
      auto low = m.begin();
      auto high = prev(m.end());

      int debit  = *low;
      int credit = *high;

    //   erase
    m.erase(low);
    m.erase(high);

    // settlement
    int settlement_amount = min(-debit,credit);
cnt++;
    // settlement amount from donor to accepter
   debit += settlement_amount;
   credit -=  settlement_amount;

   if(debit!=0){
       m.insert(debit);
   }
   if(credit!=0){
       m.insert(credit);
   }
  }
cout<<cnt<<endl;
}
