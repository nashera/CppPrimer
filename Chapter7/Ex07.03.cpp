#include <iostream>
#include <cmath>
using namespace std;

int ExpInt(int a, int b){
  return pow(a, b);
}
int main(){

  int a = 2, b = 4;
  cout << "ExpInt " << ExpInt(a, b) << endl;
  return 0;
}
