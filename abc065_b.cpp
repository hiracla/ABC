#include <iostream>
#include <vector>
using namespace std;

int main() {
  long n;
  cin >> n;
  
  vector<int> a(n+1);
  vector<bool> history(100001, false);
  
  for (long i=1; i<=n; i++) {
    cin >> a.at(i);
  }
  
  long count=1;
  long j=a.at(1);
  history.at(1)=true;
  for (long i=0; i<=a.size(); i++) {
    if (history.at(j)==true) {
      cout << -1 << endl;
      return 0;
    } else if (j==2) {
      count++;
      break;
    }
    history.at(j)=true;
    j=a.at(j);
  }
  
  cout << count << endl;
  return 0;
}