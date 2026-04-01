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
  int t, n, a, b;
  char ca, cb;
  cin >> t;
  while (t--) {
    a = b = 0;
    cin >> n;
    while (n--) {
      cin >> ca >> cb;
      if (ca == cb)
        continue;
      else if (ca == 'R' && cb == 'S' || ca == 'S' && cb == 'P' ||
               ca == 'P' && cb == 'R')
        a++;
      else
        b++;
    }
    if (a == b)
      cout << "TIE" << endl;
    else if (a > b)
      cout << "Player 1" << endl;
    else
      cout << "Player 2" << endl;
  }
  return 0;
}