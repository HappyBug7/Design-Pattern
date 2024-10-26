#include "BlockFactory.h"

int main() {
  int lineNum = 0;
  std::cin >> lineNum;
  for (int i = 0; i < lineNum; i++) {
    std::string type;
    int num;
    std::cin >> type >> num;
    Client client;
    for (int j = 0; j < num; j++) {
      client.getBlock(type);
    }
  }
}