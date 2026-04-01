#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n, m, p;
  cin >> n;
  while (n--) {
    cin >> m;
    p = pow(2, m) - 1;

    cout << p << endl;
  }
}