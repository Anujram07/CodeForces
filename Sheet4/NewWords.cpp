#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int e=0 , g=0 ,y=0,p=0,t=0;

    for(int i=0;i<s.length();i++){
        char c = tolower(s[i]);

        if(c == 'e') e++;
        if(c == 'g') g++;
        if(c == 'y') y++;
        if(c == 'p') p++;
        if(c == 't') t++;
    }

    int ans = min(e, min(g, min(y, min(p, t))));
    cout << ans;


}
