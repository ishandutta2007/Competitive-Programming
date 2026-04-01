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
  int n, y, res;
  char x;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    y = (x > 96) ? 96 - x + y : x - 64 + y;  // A:65 a:97
    cout << y << endl;
  }
  return 0;
}