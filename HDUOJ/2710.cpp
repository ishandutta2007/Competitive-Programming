#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
const int maxn = 20005;
int s[maxn];
int main() {
  int n, m, MAX, p;
  memset(s, 0, sizeof(s));
  s[1] = 1;
  for (int i = 2; i < maxn; i++)  // 筛选所有范围内的素数
  {
    if (s[i] == 0)
      for (int j = i; j < maxn; j += i) {
        s[j] = i;
      }
  }
  while (cin >> n) {
    MAX = -1;
    while (n--) {
      cin >> m;
      if (s[m] > MAX) {
        MAX = s[m];
        p = m;
      }
    }
    cout << p << endl;
  }
  return 0;
}
