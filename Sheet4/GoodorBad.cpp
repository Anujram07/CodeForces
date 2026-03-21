#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        bool good = false;

        for(int i = 0; i < s.length()-2; i++) {
            if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') ||
               (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')) {
                good = true;
            }
        }

        if(good)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }
}