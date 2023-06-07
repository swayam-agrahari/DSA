//  0 1 1 2 3 5 8 13....
#include <iostream>
using namespace std;
int main() {
  int a = 0, b = 1, c = 0, i, n;
  cin >> n;
  for (i = 1; i <= n; i++) {
    c = a + b;
    cout << a << " ";
    a = b;
    b = c;
  }
}
