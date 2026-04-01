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
  int i, n, m, j, a[100] = {0};
  while (scanf("%d", &n) != EOF) {
    i = 0;
    while (n) {
      a[i] = n % 2;
      i++;
      n /= 2;
    }

    for (int j = i - 1; j >= 0; j--) printf("%d", a[j]);
    printf("\n");
  }
  return 0;
}