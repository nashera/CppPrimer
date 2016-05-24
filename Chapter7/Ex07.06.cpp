#include <iostream>
#include <string>
using namespace std;
void swapByPt(int *v1, int *v2){
  int tmp = *v1;
  *v1 = *v2;
  *v2 = tmp;
}
void swapByRef(int &v1, int &v2){
  int tmp = v1;
  v1 = v2;
  v2 = tmp;
}
int main(){
  int v1 = 9;
  int v2 = 10;
  swapByPt(&v1, &v2);
  cout << "v1 " << v1 << endl;
  cout << "v2 " << v2 << endl;
  swapByRef(v1, v2);
  cout << "v1 " << v1 << endl;
  cout << "v2 " << v2 << endl;
  return 0;
  
}
