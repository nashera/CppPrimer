#include <iostream>
#include <cstdio>
#include <string>
//using namespace std;
class Item_base{
public:
  Item_base(const std::string &book = "", double sales_price = 0.0): isbn(book), price(sales_price){}
  std::string book() const {return isbn;}
  void sound() {
	cout << "this is the Item_base" << endl;
  }
  virtual double net_price {std::size_t n} const {
	return n * price;
  }
  virtual ~Item_base() {}
private:
  std::string isbn;
protected:
  double price;
};



class Bulk_item : public Item_base{
public:
  double net_price(std::size_t) const;
private:
  std::size_t min_qty;
  double discount;
}





  
