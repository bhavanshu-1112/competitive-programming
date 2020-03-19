#include <iostream>
#include<queue>
using namespace std;
int main() {

priority_queue<int , vector<int>, greater<int> > pq; // min priority queue
// priority_queue<int> pq; (max priority queue)

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      int no;
      cin>>no;
      pq.push(no);
  }
// remove the elements from the heap
  while(!pq.empty()){
      cout<<pq.top()<<" ";
      pq.pop();  
  }

}
