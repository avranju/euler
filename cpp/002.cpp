#include <iostream>

using namespace std;

int main() {
  const int MAX = 4000000;
  int a = 1, b = 2, sum = 2;

  while(b < MAX) {
    b = a + b;
    a = b - a;

    if(b % 2 == 0) {
      sum += b;
    }
  }

  cout<<sum<<endl;
  return 0;
}
