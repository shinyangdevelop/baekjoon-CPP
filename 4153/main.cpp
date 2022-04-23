#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    while(true) {
        vector<int> v;
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        sort(v.begin(), v.end());
        if(v.at(0)*v.at(0)+v.at(1)*v.at(1) == v.at(2)*v.at(2)) {
            cout << "right";
        }
        else {
            cout << "wrong";
        }
        cout << endl;
    }
    return 0;
}