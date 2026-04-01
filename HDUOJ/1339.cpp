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
  int n, m, T, i, o;
  cin >> T;
  while (T--) {
    cin >> n;
    for (i = 0; i <= 20; i++) {
      m = (int)pow(2.0, (double)i);  // o*m
      o = n / m;
      if (n % m == 0 && o % 2 == 1) break;
    }
    printf("%d %d\n", o, i);
  }
  return 0;
}