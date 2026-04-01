#include <time.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;
int main() {
  int x, y, minX, minY, maxX, maxY;
  while (scanf("%d %d", &x, &y), x || y) {
    minX = x, minY = y;
    maxX = x, maxY = y;
    while (scanf("%d %d", &x, &y), x || y) {
      minX = min(minX, x);
      minY = min(minY, y);
      maxX = max(maxX, x);
      maxY = max(maxY, y);
    }
    printf("%d %d %d %d\n", minX, minY, maxX, maxY);
  }
  return 0;
}