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
  double a, ans;
  while (cin >> a) {
    ans = fabs(a);
    printf("%.2lf\n", ans);
  }
  return 0;
}
