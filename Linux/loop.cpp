#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double error = 1E-5;
  double n,t;
  cin >> n;
  t = n;
  while (abs(t-n/t) > error) {
    t = (t+n/t)/2.0;
  }
  cout << "Sqrt of" << n << "is" << t << "!\n";
}
