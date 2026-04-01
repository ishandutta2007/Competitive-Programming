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
  int n;
  scanf("%d", &n);
  while (n--) {
    int a1, b1, a2, b2, a3, b3;
    scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3);
    if (a1 > b1)
      printf("First\n");
    else if (a1 < b1)
      printf("Second\n");
    else if (a1 == b1) {
      if (a2 > b2)
        printf("First\n");
      else if (a2 < b2)
        printf("Second\n");
      else if (a2 == b2) {
        if (a3 > b3)
          printf("First\n");
        else if (a3 < b3)
          printf("Second\n");
        else if (a3 == b3)
          printf("Same\n");
      }
    }
  }

  return 0;
}