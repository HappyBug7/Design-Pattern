#ifndef CART_H
#define CART_H

#include <iostream>
#include <vector>
class Cart {
public:
  static Cart& getInstance() {
    static Cart instance;
    return instance;
  }
  void addItem(std::string& name, int quantity) {
    items.push_back(Item(name, quantity));
  }

  void printItems() {
    for (const Item& item : items) {
      std::cout << item.getName() << " " << item.getQuantity() << std::endl;
    }
  }
  
private:
  Cart() : items() {}
  class Item {
  public:
    Item(std::string name, int quantity) : name(name), quantity(quantity) {}

    std::string getName() const {
      return name;
    }
    int getQuantity() const {
      return quantity;
    }
    
  private:
    std::string name;
    int quantity;
  };
  
  std::vector<Item> items;
};

#endif
