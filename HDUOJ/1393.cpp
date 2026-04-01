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
  int s, d;
  while (cin >> s >> d) {
    if (s == 0 && d == 0) break;
    int i = 0;
    while (s % 60) {
      s += (d * s) % 60;  // È¥µô%60¾Í»áWA
      i++;
      if (i > 10000) break;
    }
    if (i <= 10000)
      cout << i << endl;
    else
      cout << "Impossible" << endl;
  }
  return 0;
}