#ifndef REMOTECONTROLLER_H
#define REMOTECONTROLLER_H
#include "TV.h"
class RemoteController {
public:
  RemoteController(TV* tv) {
    this -> tv = tv;
  }
  void on() {
    tv->on();
  }
  void off() {
    tv->off();
  }
  void changeChannel() {
    tv->changeChannel();
  }
private:
  TV* tv;
};
#endif