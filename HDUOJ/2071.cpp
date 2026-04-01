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
  cin >> n;
  while (n--) {
    int m, i;
    double h, s;
    double maxn = 0.00;
    cin >> m;
    for (i = 0; i < m; i++) {
      cin >> h;
      maxn = max(maxn, h);
    }
    printf("%.2lf\n", maxn);
  }
  return 0;
}