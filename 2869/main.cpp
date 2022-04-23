#include <iostream>

using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    int c = (v-a)/(a-b)+1;
    if((v-a)%(a-b) != 0) {
        c++;
    }
    cout << c;
    return 0;
}