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
  int i;
  float s, n, m;
  while (scanf("%f %f", &n, &m) != EOF) {
    s = 0;
    for (i = 0; i < m; i++) {
      s = s + n;
      n = sqrt(n);
    }
    printf("%.2f\n", s);
  }

  return 0;
}
