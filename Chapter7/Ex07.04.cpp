#include <iostream>
using namespace std;
int main_test(int argc, char** argv){
  cout << argv[1] << " " <<argv[2] << endl;
  return 0;
}
int abs(int a){
  return (a>0 ? a : (-a));
}

int main(int argc, char** argv){
  int a = -8;
  cout << "abs " << abs(a) << endl;
  return main_test(argc, argv);
}
