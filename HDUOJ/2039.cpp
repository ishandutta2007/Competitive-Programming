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
  int n;
  double a, b, c;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
