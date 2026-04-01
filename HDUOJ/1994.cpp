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
  int t;
  double y, q, e, f, g;
  cin >> t;
  while (t--) {
    // Y-存入的本金<=100000,
    // Q-已存天数<=365,
    // e-活期利率,
    // f-定期利率
    // g-提高后的定期利率.
    cin >> y >> q >> e >> f >> g;
    cout << y * (1 + e / 100 * q / 365) * (1 + g / 100) << endl;
    cout << y * (1 + f / 100 * (q + 365) / 365) << endl;
  }

  return 0;
}