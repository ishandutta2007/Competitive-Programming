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

int main() {
  int n, k = 1;
  while ((cin >> n) && n > 0) {
    int sum = 0, x;
    for (int i = 0; i < n; i++) {
      cin >> x;
      sum += x;
    }
    cout << "Sum of #" << k++ << " is " << sum << endl;
  }
}