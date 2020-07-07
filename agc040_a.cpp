#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    long sum=0;
    long gtcount=0, ltcount=0;
    rep(i,s.size()) {
        if (s.at(i)=='<') {
            if (gtcount==0) {
                gtcount++;
                sum += 0;
            } else {
                gtcount++;
                sum += gtcount;
            }
            ltcount=0;
        cout << "g:" << gtcount << " " << sum << endl;
        }
        else if (s.at(i)=='>') {
            ltcount++;
            sum += ltcount;
            gtcount=0;
        cout << "l:" << ltcount << " "<< sum << endl;
        }
    }

cout << endl;
    cout << sum << endl;
    return 0;
}