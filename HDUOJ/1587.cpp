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
  int n, m, i;
  int a[10000];
  while (cin >> n >> m) {
    for (i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    cout << m / a[0] << endl;
  }
  return 0;
}