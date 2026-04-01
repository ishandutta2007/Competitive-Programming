#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;
#define PI 3.1415927
int main() {
  double r;
  double ans;
  while (cin >> r) {
    ans = (4 * PI * r * r * r) / 3;
    printf("%.3lf\n", ans);
  }
  return 0;
}
