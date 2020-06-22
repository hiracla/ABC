#include <iostream>

using namespace std;

int main() {
  int a, b;
  
  cin >> a >> b;
  
  int cnt;
  if (b==1) {
    cout << 0 << endl;
    return 0;
  }
  for (int i=0; i<20; i++) {
    cnt = a + (a-1)*i;
    
    if (cnt >= b) {
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}
