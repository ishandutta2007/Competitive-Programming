#include <memory.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
int main() {
  int a, b;
  while (cin >> a >> b && a != 0 && b != 0) {
    int v = 0, k = 0;
    for (v = 0; v <= 99; v++)
      if ((a * 100 + v) % b == 0) {
        if (k == 1) printf(" ");
        k = 1;
        if (v < 10)
          printf("0%d", v);
        else
          printf("%d", v);
      }
    printf("\n");
  }
  return 0;
}