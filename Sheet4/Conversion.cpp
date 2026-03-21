#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ',') {
            cout << " ";
        }
        else if(islower(s[i])) {
            cout << char(toupper(s[i]));
        }
        else if(isupper(s[i])) {
            cout << char(tolower(s[i]));
        }
    }

    return 0;
}