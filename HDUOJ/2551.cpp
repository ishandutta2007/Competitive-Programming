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
  int t, x;
  cin >> t;
  while (t--) {
    cin >> x;
    LL s = 0, i = 1;
    while (s < x) {
      s += pow(i, 3);
      i++;
    }
    cout << i - 1 << endl;
  }
  return 0;
}