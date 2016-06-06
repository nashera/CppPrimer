#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
template <typename InIt, typename T> findElem(InIt first, InIt last, const T &val){
  while(first != last){
	if(*first == val){
	  return first;
	}
	++first;
  }
  return last;
}


int main(){
  int ia[] = {1, 2, 3, 4, 5, 6, 7};
  string sa[] = {"this", "is", "Mary", "test", "example"};
  vector<int> ivec(ia, ia + 7);
  vector<string> svec(sa, sa+5);
  vector<int>::iterater iit;
  if(iit)
  
}








