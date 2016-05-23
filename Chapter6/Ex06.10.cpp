#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  char ival;
  int aCnt = 0, eCnt = 0, iouCnt = 0;
  while(cin >> ival){
	// (a)
	switch (ival){
	case 'a': aCnt++; break;
	case 'e': eCnt++; break;
	default: iouCnt++; break;
	}
	// (b)
	switch(ival){
	case 1:
	  {
		int ix = get_value();
		ivec[ix] = ival;
		break;
	  }
	default:
	  {
		ix = ivec.size() - 1;
		ivec[ix] = ival;
	  }
	}
	// (c)
	switch(ival){
	case 1: case 3: case 5 : case 7 : case 9:
	  oddcnt++;
	  break;
	case 2: case 4: case 6: case 8: case 10:
	  evencnt++;
	  break;
	}
	//(d)

	int ival = 512, jval = 1024, kval = 4096;
	int bufsize;

	switch(swt){
	case 512:
	  bufsize = ival * sizeof(int);
	  break;
	case 1024:
	  bufsize = jval * sizeof(int);
	  break;
	case 4096:
	  bufsize = kval * sizeof(int);
	  break;
	}
  }
  
}

