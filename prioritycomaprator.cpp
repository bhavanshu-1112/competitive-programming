#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Person{
  public:
  string name;
  int age;
    
  Person(){

  }
  Person(string n,int a){
      name = n;
      age  = a;
  }
};

class PersonCompare{
public:
  bool operator()(Person A,Person B){
      cout<<"Comparing "<<A.name<<" with "<<B.name<<endl;
      return A.name > B.name;
  }
};
int main(){
    int n;
    cin>>n;
    priority_queue<Person, vector<Person>,  PersonCompare> pq;
    for(int i=0;i<n;i++){
       string name;
       int age;
       cin>>name>>age;
       Person p(name, age);
       pq.push(p);
    }

    int k =3;
    for(int i=0;i<k;i++){
        Person p = pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
}
