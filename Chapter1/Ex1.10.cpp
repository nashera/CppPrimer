#include <iostream>
using namespace std;
int main(){
	int sum = 0;
	int i;
	for(i = 50; i <= 100; i++){
		sum += i;
	}
	cout << sum << endl;
	int sum2 = 0;
	i = 100;
	while(i >= 50){
		sum2 += i;
		i--;
	}
	cout << sum2 << endl;

}
