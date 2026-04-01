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
  int n;
  cin >> n;
  while (n--) {
    int m, i, j;
    cin >> m;
    char s[4] = "HDU";
    for (i = 1; i <= 3 * m; i++) {
      for (j = 1; j <= m; j++) cout << s;
      cout << endl;
    }
  }
  return 0;
}