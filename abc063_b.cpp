#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  for (int i=0; i<s.length()-1; i++) {
    for (int j=i+1; j<s.length(); j++) {
      if (s[i]==s[j]) {
        cout << "no" << endl;
        return 0;
      }
    }
  }
  
  cout << "yes" << endl;
  
  return 0;
}
