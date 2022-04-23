#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int result = 0;
    for(int counter = 0; counter<a; counter++) {
        string input;
        cin >> input;
        bool used[26] = {false,};
        char previouschar = '\0';
        bool success = true;
        for(char c:input) {
            if(c!=previouschar) {
                if(used[c-'a']) {
                    success = false;
                    break;
                }
                else {
                    used[c-'a'] = true;
                }
            }
            previouschar = c;
        }
        if(success) {
            result++;
        }
    }
    cout << result;
    return 0;
}