#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
const int maxn = 100;

int main() {
  int t, m, n, i, j;
  double a, b;
  cin >> t;
  while (t--) {
    a = 1;
    b = 1;
    cin >> n >> m;
    for (i = 1; i <= m; i++) a = a * i;             // A(3,3)
    for (j = n, i = m; i > 0; --j, --i) b = b * j;  // A(5,3)
    printf("%.0lf\n", b / a);
  }
  return 0;
}