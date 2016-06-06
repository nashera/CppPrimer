#include <iostream>
#include <string>
using namespace std;
class Animal{

public:
  string name;
  int age;
  Animal(string name, int age){
	this->name = name;
	this->age = age;
  }
  virtual void shout(){
	cout << "The anmimal is shouting" << endl;
  }
};


class Cat : public Animal{

public:
  Cat(string name, int age): Animal(name, age){
  }
  
  virtual void shout(){
	cout << "The cat is shouting" << endl;
  }
};


int main(){

  Animal *animal = new Cat("mimi", 8);
  Animal animal2 = *animal;
  cout << animal2.age << endl;
  cout << __FILE__ << endl;
  cout << __LINE__ << endl;

  animal->shout();
  cout << animal->name << endl;
  return 0;
}



