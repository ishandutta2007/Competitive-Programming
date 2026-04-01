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
int main() {
  int n;
  cin >> n;
  while (n--) {
    int a, b, t;
    cin >> a >> b >> t;
    if (t % a == t % b)
      cout << "Both!" << endl;
    else if (t % a > t % b)
      cout << "Xiangsanzi!" << endl;
    else
      cout << "Sempr!" << endl;
  }

  return 0;
}