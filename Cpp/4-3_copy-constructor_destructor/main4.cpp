#include "canon.h"

int main() {
  Photon_Cannon pc1(3, 3);
  Photon_Cannon pc2(pc1); // copy constructor call
  Photon_Cannon pc3 = pc2; // copy constructor call

  pc1.show_status();
  pc2.show_status();
}