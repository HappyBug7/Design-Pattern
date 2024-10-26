#include "RemoteController.h"
#include "TV.h"

int main() {
  TV* sonyTV = new SonyTV();
  TV* tclTV = new TCLTV();
  RemoteController* remoteController1 = new RemoteController(sonyTV);
  RemoteController* remoteController2 = new RemoteController(tclTV);
  int num = 0;
  std::cin >> num;
  for (int i = 0; i < num; i++) {
    int tv, operation;
    std::cin >> tv >> operation;
    if (tv == 0) {
      switch (operation)
      {
      case 2:
        remoteController1->on();
        break;
      case 3:
        remoteController1->off();
        break;
      case 4:
        remoteController1->changeChannel();
        break;
      default:
        break;
      }
    } else {
      switch (operation)
      {
      case 2:
        remoteController2->on();
        break;
      case 3:
        remoteController2->off();
        break;
      case 4:
        remoteController2->changeChannel();
        break;
      default:
        break;
      }
    }
  }
}