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
  int i, n, a[100], num;
  while (cin >> n && n) {
    num = 0;
    for (i = 0; i < n; i++) {
      cin >> a[i];
      num += a[i] / 100 + a[i] % 100 / 50 + a[i] % 100 % 50 / 10;      // 3ÖÖ
      num += a[i] % 100 % 50 % 10 / 5 + a[i] % 100 % 50 % 10 % 5 / 2;  // 3ÖÖ
      num += a[i] % 100 % 50 % 10 % 5 % 2;                             // 2ÖÖ
    }
    cout << num << endl;
  }
  return 0;
}