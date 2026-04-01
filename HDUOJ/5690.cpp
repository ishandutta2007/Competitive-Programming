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
const int maxn = 1000000000;
char a[maxn];
int main() {
  LL t, x, m, k, c;
  int flag = 0;
  scanf("%lld", &t);
  while (t--) {
    LL num;
    scanf("%lld %lld %lld %lld", &x, &m, &k, &c);
    num = m % k;
    LL ans = 0;
    for (int i = 1; i <= num; i++) {
      ans = (ans * 10 + x) % k;
    }
    //	cout<<num<<endl;
    if (ans % k == c)
      printf("Case #%lld:\nYes\n", ++flag);
    else
      printf("Case #%lld:\nNo\n", ++flag);
  }
  return 0;
}