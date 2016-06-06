#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
template <typename T> int bigger(T &v1, T &v2){
  if(v1 < v2) return v2;
  if(v2 < v1) return v1;
  return v1;
}
int main(){
  int a = 9, b = 10;
  cout << bigger(a, b) << endl;
  return 0;
  
}
