#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

// class is_greater_than_0 {
// public:
//     bool operator()(int v) const {
//         return v>0;
//     }
// };

int main() {
    int n;
    cin >> n;

    vector<int> rate(9);
    rep(i,n) {
        int ibuff;
        cin >> ibuff;
        if (ibuff<=399)         rate.at(0)++;
        else if (ibuff<=799)    rate.at(1)++;
        else if (ibuff<=1199)   rate.at(2)++;
        else if (ibuff<=1599)   rate.at(3)++;
        else if (ibuff<=1999)   rate.at(4)++;
        else if (ibuff<=2399)   rate.at(5)++;
        else if (ibuff<=2799)   rate.at(6)++;
        else if (ibuff<=3199)   rate.at(7)++;
        else                    rate.at(8)++;
    }

    rep(i,9) {
        cout << rate.at(i) << " ";
    }
    cout << endl;
    int minElement = *min_element(rate.begin(), rate.end(), [](int a, int b) {
        if (a==0) return false;
        else if (b==0) return true;
    });
    int maxElement = *max_element(rate.begin(), rate.end());
    
    cout << minElement << " " << maxElement << endl;

    return 0;
}