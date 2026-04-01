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
  double a, b, c, d;
  double m, n, ans;
  while (cin >> a >> b >> c >> d) {
    m = a - c;
    n = b - d;
    ans = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    printf("%.2lf\n", ans);
  }
  return 0;
}
