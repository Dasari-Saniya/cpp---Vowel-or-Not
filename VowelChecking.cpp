#include <iostream>
using namespace std;

class Solution {
public:
    string isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return "YES";
        } else {
            return "NO";
        }
    }
};

int main() {
    Solution obj;
    char c;
    cin >> c;
    cout << obj.isVowel(c);
    return 0;
}

