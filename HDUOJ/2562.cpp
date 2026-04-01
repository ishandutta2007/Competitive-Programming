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
  cin >> n;
  while (n--) {
    int i;
    char a[53], t;
    cin >> a;
    for (i = 0; i < strlen(a); i += 2) {
      swap(a[i + 1], a[i]);
    }
    cout << a << endl;
  }
  return 0;
}