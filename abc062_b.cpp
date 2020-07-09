#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    rep(i,h) {
        cin >> s.at(i);
    }

    vector<vector<char>> a(h+2, vector<char>(w+2));
    cout << endl;
    rep(i,h){
        rep(j,w) {
            if (i==0 || i==h+1) a.at(i).at(j)='#';
            if (j==0 || j==w+1) a.at(i).at(j)='#';
            a.at(i+1).at(j+1)=s[i].at(j);
        }
        cout << endl;
    }

    return 0;
}