
#include <stdio.h>
#include <stdlib.h>

volatile int g16 = 3;
volatile int *gptr16 = &g16;
int f15() { return *gptr16; }
volatile int g17 = 1;
volatile int *gptr17 = &g17;
int g24 = -1;
int *gptr24 = &g24;

void other();
int main() {
  int x2[4] = {0};
  (void)x2;
  char *x5 = malloc(4);
  (void)x5;
  char *x7 = malloc(80);
  (void)x7;
  x7[57] = (char)1;
  printf("Hello World\n");
  free(x7);
  free(x5);
  x2[f15()] = (int)*gptr17;
  printf("Hello World\n");

  other();
}

void other() {
  int i20 = 4;
  i20 += 13;
  printf("%d\n", i20);
  char y[4] = {1};
  int i21 = 4;
  i21 += 13;
  printf("%d\n", i21);
  y[*gptr24] = 4;

  printf("%p\n", y);
}