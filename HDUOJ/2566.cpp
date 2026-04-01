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

int main() {
  int n;
  int a, m;
  cin >> n;
  while (n--) {
    cin >> a >> m;
    int sum = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j <= m / 2; j++) {
        for (int k = 0; k <= m / 5; k++) {
          if ((i + 2 * j + 5 * k) == m && i + j + k == a) sum++;
        }
      }
    }
    cout << sum << endl;
  }
  return 0;
}