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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << "1" << endl;
      continue;
    }
    int sum = 0;
    while (n) {
      if (n % 2 == 1) {
        --n;
        sum++;
      }
      while (n % 2 == 0 && n != 0) {
        n /= 2;
      }
    }
    cout << sum << endl;
  }
  return 0;
}
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
// ตÝน้
#include <iostream>
                                                            using namespace std;
int number;
int sum(int n) {
  if (n == 1) {
    number++;
    return number;
  }
  if (n % 2 == 0) {
    n = n / 2;
    sum(n);
    return number;
  }
  if (n % 2 != 0) {
    n = n - 1;
    number++;
    sum(n);
    return number;
  }
}
int main() {
  int t;
  long long n;
  cin >> t;
  while (t--) {
    number = 0;
    cin >> n;
    cout << sum(n) << endl;
  }
  return 0;
}