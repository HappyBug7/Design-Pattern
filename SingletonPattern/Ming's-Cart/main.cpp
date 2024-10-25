#include "Cart.h"

int main() {
  std::string name;
  int quantity;
  while (std::cin >> name >> quantity) {
    Cart& cart = Cart::getInstance();
    cart.addItem(name, quantity);
  }
  Cart& cart = Cart::getInstance();
  cart.printItems();
}