#include <iostream>
using namespace std;


bool isOdd(int n) {
    return (n & 1);  
}


bool isBinaryPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = (reversed << 1) | (n & 1);
        n >>= 1;
    }

    return original == reversed;
}

int main() {
    int n;
    cin >> n;

    if (isOdd(n) && isBinaryPalindrome(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}