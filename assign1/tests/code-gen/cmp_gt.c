
#include "FenneC.h"

int main() {
  if (65536 > 2) Print(3);
  if (65536 > 3) Print(4);
  if (65536 > 4) Print(5);
  if (1 > 65536) Print(10);
  if (1 > 5) Print(15);
  if (2 > 3) Print(22);
  if (2 > 5) Print(24);
  if (2 > 65535) Print(27);
  if (3 > 1) Print(29);
  if (3 > 3) Print(31);
  if (3 > 5) Print(33);
  if (3 > 65537) Print(34);
  if (3 > 2147483647) Print(35);
  if (4 > 65536) Print(37);
  if (4 > 2) Print(39);
  if (4 > 3) Print(40);
  if (4 > 65537) Print(43);
  if (5 > 5) Print(51);
  if (5 > 65537) Print(52);
  if (5 > 2147483647) Print(53);
  if (65537 > 65536) Print(55);
  if (65537 > 4) Print(59);
  if (65537 > 5) Print(60);
  if (65537 > 2147483647) Print(62);
  if (65537 > 65535) Print(63);
  if (2147483647 > 2) Print(66);
  if (2147483647 > 4) Print(68);
  if (65535 > 3) Print(76);
  if (65536U > 1U) Print(83);
  if (65536U > 2U) Print(84);
  if (65536U > 3U) Print(85);
  if (65536U > 4U) Print(86);
  if (65536U > 5U) Print(87);
  if (65536U > 2147483649U) Print(90);
  if (1U > 2147483649U) Print(102);
  if (2U > 1U) Print(107);
  if (2U > 2U) Print(108);
  if (2U > 65537U) Print(112);
  if (2U > 65535U) Print(117);
  if (3U > 2U) Print(120);
  if (3U > 65537U) Print(124);
  if (4U > 2147483648U) Print(137);
  if (4U > 2147483649U) Print(138);
  if (4U > 4294967295U) Print(139);
  if (4U > 65535U) Print(141);
  if (5U > 1U) Print(143);
  if (5U > 65537U) Print(148);
  if (5U > 2147483648U) Print(149);
  if (5U > 2147483647U) Print(152);
  if (5U > 65535U) Print(153);
  if (65537U > 2U) Print(156);
  if (65537U > 65537U) Print(160);
  if (65537U > 4294967295U) Print(163);
  if (2147483648U > 65535U) Print(177);
  if (2147483649U > 65536U) Print(178);
  if (2147483649U > 1U) Print(179);
  if (2147483649U > 4U) Print(182);
  if (2147483649U > 2147483649U) Print(186);
  if (2147483649U > 2147483647U) Print(188);
  if (2147483649U > 65535U) Print(189);
  if (4294967295U > 65536U) Print(190);
  if (4294967295U > 2U) Print(192);
  if (4294967295U > 2147483648U) Print(197);
  if (4294967295U > 4294967295U) Print(199);
  if (2147483647U > 65536U) Print(202);
  if (2147483647U > 4U) Print(206);
  if (2147483647U > 65537U) Print(208);
  if (65535U > 1U) Print(215);
  if (65535U > 2U) Print(216);
  if (65535U > 2147483649U) Print(222);

  return 0;
}
