#include <iostream>

using namespace std;

int main() {
  int sum = 0, i = 1000;
  while(--i > 0) {
    if((i % 3 == 0) || (i % 5) == 0) {
      sum += i;
    }
  }

  cout<<sum<<endl;
  return 0;
}
