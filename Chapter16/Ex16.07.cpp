#include <iostream>
#include <cstdio>
using namespace std;
// (a)
template <class T, class U, typename V> void f1(T &t, U &u, V &v){;}
// (b)
template <class T> T f2(T &t){;}
// (c)
template <class T> inline T foo(T, unsigned int*){;}
// (d)
template <class T> void f4(T &t1, T &t2){;}
// (e)
typedef char Ctype;
template <typename Ctype> Ctype f2(Ctype a);


int main(){
  return 0;
}
