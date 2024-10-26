#ifndef BLOCK_FACTORY_H
#define BLOCK_FACTORY_H

#include <iostream>
class Block {
public:
  virtual void produce() = 0;
};

class BlockFactory {
public:
  virtual void getBlock() = 0;
};

class SquareBlock : Block {
public:
  SquareBlock() {}
  void produce() override {
    std::cout << "Square Block" << std::endl;
  }
};

class CircleBlock : Block {
public:
  CircleBlock() {}
  void produce() override {
    std::cout << "Circle Block" << std::endl;
  }
};

class SquareBlockFactory : BlockFactory {
public:
  SquareBlockFactory() {}
  void getBlock() override {
    SquareBlock squareBlock;
    squareBlock.produce();
  }
};

class CircleBlockFactory : BlockFactory {
public:
  CircleBlockFactory() {}
  void getBlock() override {
    CircleBlock circleBlock;
    circleBlock.produce();
  }
};

class Client {
public:
  Client() {}
  void getBlock(std::string type) {
    if (type == "Square") {
      SquareBlockFactory squareBlockFactory;
      squareBlockFactory.getBlock();
    } else if (type == "Circle") {
      CircleBlockFactory circleBlockFactory;
      circleBlockFactory.getBlock();
    }
  }
};

#endif