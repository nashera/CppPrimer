#include <iostream>
using namespace std;
int abs(int a){
  return (a>0 ? a : (-a));
}

int main(){
  int a = -8;
  cout << "abs " << abs(a) << endl;
  return 0;
}
