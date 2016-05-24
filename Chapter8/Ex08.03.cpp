#include <iostream>
#include <cstdio>
using namespace std;
istream &print(istream &inos){
  
  int ival;
  while(inos >> ival, !inos.eof()){
	if(inos.bad()){
	  throw runtime_error("IO stream corrupted");
	}
	if(inos.fail()){
	  cerr << "bad data, try again" << endl;
	  inos.clear(iostream::failbit);
	  break;
	}
	cout << ival << endl;
  }

  
}
int main(){
  print(cin);
  return 0;
}
