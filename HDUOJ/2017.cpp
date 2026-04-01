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
  int T, len;
  cin >> T;
  while (T--) {
    string s;
    int sum = 0;
    cin >> s;
    len = s.size();
    for (int i = 0; i < len; i++) {
      if (s[i] >= '0' && s[i] <= '9') sum++;
    }
    printf("%d\n", sum);
  }
  return 0;
}