#ifndef TV_H
#define TV_H

#include <iostream>
class TV {
public:
  virtual void on() = 0;
  virtual void off() = 0;
  virtual void changeChannel() = 0;
};

class SonyTV : public TV {
public:
  SonyTV() {}
  void on() override {
    std::cout << "Sony TV is ON" << std::endl;
  }
  void off() override {
    std::cout << "Sony TV is OFF" << std::endl;
  }
  void changeChannel() override {
    std::cout << "Switching Sony TV channel" << std::endl;
  }
};

class TCLTV : public TV {
public:
  TCLTV() {}
  void on() override {
    std::cout << "TCL TV is ON" << std::endl;
  }
  void off() override {
    std::cout << "TCL TV is OFF" << std::endl;
  }
  void changeChannel() override {
    std::cout << "Switching TCL TV channel" << std::endl;
  }
};

#endif