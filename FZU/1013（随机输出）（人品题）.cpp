#include <time.h>

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 10;
int main() {
  srand((int)time(0));
  int ans = rand() % 50;
  cout << ans << endl;
  return 0;
}