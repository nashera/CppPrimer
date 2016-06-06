#include <iostream>
#include <cstdio>
using namespace std;
//(a)
template <class Type> Type bar(Type, Type) ;
template <class Type> Type bar(Type, Type) ;
//(b)
template <class T1, class T2> void bar(T1, T2) ;
template <class C1, typename C2> void bar(C1, C2);
int main(){
  return 0;
}
