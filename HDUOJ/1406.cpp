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
bool Wan_shu(int n) {
  int sum = 1;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }
  if (sum == n)
    return 1;
  else
    return 0;
}

int main() {
  int ws[10000] = {0};
  for (int i = 0; i < 10000; i++) {  // ´ò±í
    if (Wan_shu(i)) {
      ws[i] = 1;
    }
  }
  int T;
  cin >> T;
  while (T--) {
    int a, b;
    int count = 0;
    cin >> a >> b;
    if (a > b) {
      swap(a, b);
    }
    for (int i = a; i <= b; i++) {
      count += ws[i];
    }
    cout << count << endl;
  }
  return 0;
}