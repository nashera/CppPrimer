#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
template <class os, typename T> ios &print(os &osDev, T &v){
  osDev << v << endl;
  return osDev;
}

int main(){
  int a = 9;
  print(cout, a);
  string iFile = "test.txt";
  ofstream ofs(iFile.c_str());
  print(ofs, a);
  ofs.close();
  ostringstream ostr;
  print(ostr, a);
  string gstr = ostr.str();
  cout << gstr << endl;
  return 0;
}

