#include <iostream>
#include <cstdio>
using namespace std;
int bigInt(int v1, int v2){
  return(v1>v2 ? v1 : v2);
}
int main(){
  int v1 = 9, v2 = 10;
  cout << bigInt(v1, v2) << endl;
  return 0;
}
