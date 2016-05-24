#include <iostream>
using namespace std;
int gcd(int v1, int v2){
  while(v2){
	int tmp = v2;
	v2 = v1 % v2;
	v1 = tmp;
  }
  return v1;
}
int main(){
  int v1 = 9;
  int v2 = 12;
  cout << gcd(v1, v2) << endl;
  return 0;
}
