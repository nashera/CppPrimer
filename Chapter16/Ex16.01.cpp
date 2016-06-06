#include <iostream>
#include <cstdio>
using namespace std;
template <typename T> T abs(const T &v){
  return (v >= 0 ? v : (-v));
}
int main(){
  int a = -9;
  cout << abs(a) << endl;
  double b = -0.47927490;
  cout << abs(b) << endl;
  float c = -289028.000000;
  cout <<  abs(c) << endl;
  return 0;

  
}
