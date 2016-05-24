#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int sumVec(const vector<int> &vec){
  vector<int>::const_iterator iter;
  int sum = 0;
  for(iter = vec.begin(); iter != vec.end(); ++iter){
	sum += *iter;
  }
  return sum;
}
int main(){
  // 如下情况将形参定义为引用
  // 1. 通过形参调用修改参数的值, 如swap 函数
  // 2. 通过一次调用获得多个结果值.
  // 3. 传递大型对象时, 避免复制形参.
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
  cout << sumVec(vec) << endl;
  return 0;



  // 如下情况不应该将形参定义为引用.
  // 1. 不需要通过函数调用修改实参的值, 如求绝对值的函数.
  
  
}
