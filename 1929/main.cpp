#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b,a;
    cin >> b;
    cin >> a;
    bool prime[a+1];
    fill_n(prime, a+1, 1);
    prime[0] = false;
    prime[1] = false;

    for (int counter= 2; counter<= sqrt(a); counter++) {
        if(prime[counter]) {
            for(int j = counter*2; j <= a; j += counter) {
                prime[j] = false;
            }
        }
    }
    for (int counter= b; counter<= a;counter++) {
        if(prime[counter]) {
            cout << counter<< "\n";
        }    
    }
    return 0;
}