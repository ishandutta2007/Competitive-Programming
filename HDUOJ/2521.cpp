#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
const int maxn = 100;
// 和反素数没关系
int f(int n) {
  int s = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) s++;
  }
  return s;
}
int main() {
  int n, a, b;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    int max = a;
    int m = f(a);
    for (int i = a; i <= b; i++) {
      if (m < f(i)) {
        m = f(i);
        max = i;
      }
    }
    cout << max << endl;
  }
  return 0;
}