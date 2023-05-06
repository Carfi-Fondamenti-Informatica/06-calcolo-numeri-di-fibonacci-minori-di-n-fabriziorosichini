#include <iostream>
using namespace std;

int main() {
    int x1=1, x2=1, i=0, x3=0, n=0;
    cin>>n;

    if (n>0) {
        cout << x1 << endl << x2 << endl;
        for (i = 0; i < n; i++) {
            x3 = x1 + x2;
            x1 = x2;
            x2 = x3;
            if (x3 > n) {
                break;
            }
            cout << x3 << endl;
        }
    }

    return 0;
}

