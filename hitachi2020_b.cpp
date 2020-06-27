#include <iostream>
#include <tuple>
using namespace std;

int main() {
    long A, B, M;
    cin >> A >> B >> M;

    long a[A], b[B];
    //冷蔵庫の値段を入力
    for (int i=0; i<A; i++) {
        cin >> a[i];
    }
    //電子レンジの値段を入力
    for (int i=0; i<B; i++) {
        cin >> b[i];
    }
    //割引券情報を入力
    tuple<long, long, long> waribiki;
    for (int i=0; i<M; i++) {
        long x, y, c;
        cin >> x >> y >> c;
        waribiki.emplace_back(x, y, c);
    }
    sort(begin(waribiki), end(waribiki));


}