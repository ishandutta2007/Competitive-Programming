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
  int ans = 0;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      ans += i;
    }
  }
  // cout<<ans<<endl;
  return ans;
}
int main() {
  int T;
  int n, m;
  cin >> T;
  while (T--) {
    cin >> n >> m;
    if (n == f(m)) {
      if (m == f(n)) printf("YES\n");
    } else
      printf("NO\n");
  }
  return 0;
}