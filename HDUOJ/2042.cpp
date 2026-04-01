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
int f(int n) {
  if (n == 1)
    return 4;
  else
    return (f(n - 1) - 1) * 2;
}
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int ans;
    ans = f(n);
    cout << ans << endl;
  }
  return 0;
}