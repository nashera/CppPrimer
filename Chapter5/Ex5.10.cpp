#include <iostream>
#include <bitset>
using namespace std;
int main(){
    const int student_num = 50;
    bitset<student_num> bitset_quiz;
    for(int index = 0; index != student_num; ++i){
        bitset_quiz.set(index);
    }
    return 0;
}
