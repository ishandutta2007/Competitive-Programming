#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;

int main() {
  int m, n;
  int a, b, c;
  int num[999] = {0};
  for (int i = 100; i <= 999; i++) {
    a = i % 10;       // ¸ö
    b = i / 10 % 10;  // Ê®
    c = i / 100;      // °Ù
    if (a * a * a + b * b * b + c * c * c == i) {
      num[i] = i;
    }
  }
  while (cin >> m >> n) {
    int j = 0;
    for (int i = m; i <= n; i++) {
      if (num[i] == 0) continue;

      if (j == 1) {
        printf(" ");
      }
      printf("%d", num[i]);
      j = 1;
    }
    if (j == 0)
      printf("no\n");
    else
      printf("\n");
  }

  return 0;
}
