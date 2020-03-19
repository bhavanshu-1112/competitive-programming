#include <iostream>
#include<queue>
using namespace std;
//functional operators - functors
class Fun{
  public: 
  void operator()(string s){
      cout<<"Having Fun with "<<s;
  }
};
int main() {

    Fun f;
    f("C++");
}
