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
    int a, b, c, i, j = 0;
    cin >> a >> b >> c;
    for (i = 1000; i < 10000; i++)
      if ((i % a == 0) && ((i + 1) % b == 0) && ((i + 2) % c == 0)) {
        j = i;
        cout << j << endl;
        break;
      }
    if (j == 0) cout << "Impossible\n";
  }
  return 0;
}