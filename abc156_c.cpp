#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int X[N];
    for (int i=0; i<N; i++){
        cin >> X[i];
    }

    int min=1000000;

    for (int p=1; p<100; p++){
        int power=0;
        for (int i=0; i<N; i++){
            power += (X[i]-p)*(X[i]-p);
        }
        if (power<min)  min=power;
    }
    cout << min << endl;
}
