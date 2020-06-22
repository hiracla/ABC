#include <iostream>
using namespace std;

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)

int main() {
  int N;
  cin >> N;
  
  long A[N];
  REP(i, N) {
    cin >> A[i];
  }
  
  int count=0;
  bool flag=false;
  while(1) {
    REP(i, N) {
      if (A[i]%2) {
        flag=true;
        break;
      }
      else A[i] /= 2;
    }
    if (flag) break;
    count++;
  }
  
  cout << count << endl;
  
  return 0;
}
