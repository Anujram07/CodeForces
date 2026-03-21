#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string s, t;
        cin >> s >> t;

        int mx = max(s.length(), t.length());

        for(int i = 0; i < mx; i++) {
            if(i < s.length())
                cout << s[i];

            if(i < t.length())
                cout << t[i];
        }

        cout << endl;
    }

    return 0;
}