#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> cbuff(26);
    //  = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (long i=0; i<S.size(); i++) {
        cbuff[S[i]-0x61]=1;
    }

    for (int i=0; i<sizeof(cbuff)/sizeof(cbuff[0]); i++) {
        if (cbuff[i]==0) {
            char a='a'+i;
            cout << a << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}