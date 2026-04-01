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
  int m, k;
  while (cin >> m >> k, m && k) {
    int day = 0;
    int j = 0;
    while (m > 0) {
      day++;
      m = m - 1;
      j++;
      if (j == k) m = m + 1, j = 0;
    }
    cout << day << endl;
  }
  return 0;
}