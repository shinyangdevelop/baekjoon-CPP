#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c) {
        cout << 10000+1000*a;
    }
    else if(a == b || a == c) {
        cout << 1000+100*a;
    }
    else if(b == c) {
        cout << 1000+100*b;
    }
    else {
        cout << max(a, max(b, c))*100;
    }
    return 0;
}
