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
  int n, a[100], s;  // 如果改为double则出错：
  // error: invalid operands of types 'double' and 'double [100]' to binary
  // 'operator+'
  while (cin >> n) {
    s = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s += a[i];
    }
    sort(a, n + a);
    // cout<<fixed<<setprecision(2)<<(double)(s-a[0]-a[n-1])/(n-2)<<endl;
    printf("%.2lf\n", (double)(s - a[0] - a[n - 1]) / (n - 2));
  }
  return 0;
}