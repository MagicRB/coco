
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

volatile int g9 = 71;
int f10() { return 1; }
volatile int g23 = 23;
int f22() { return g23; }
volatile int g30 = 1;
int f29() { return g30; }
int f28() { return f29(); }

int main() {
  printf("Hello World\n");
  int *x = malloc(4);
  char x3[80] = {0};
  (void)x3;
  int *x5 = malloc(320);
  (void)x5;
  int i6 = 4;
  i6 += 4;
  printf("%d\n", i6);
  free(x5);
  int i7 = 4;
  i7 += 4;
  printf("%d\n", i7);
  x3[g9] = (char)f10();
  printf("Hello World\n");
  x[5] = 1;

  printf("%p\n", x);

  free(x);
  int x16[4] = {0};
  (void)x16;
  char x18[80] = {0};
  (void)x18;
  printf("Hello World\n");
  x18[f22()] = (char)1;
  int r30 = x16[f28()];
  (void)r30;
}
