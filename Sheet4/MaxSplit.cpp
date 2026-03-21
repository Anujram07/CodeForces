#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int lcount = 0;
    int rcount = 0;
    int balanced = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'L'){
            lcount++;
        }else if(s[i] == 'R'){
            rcount++;
        }

        if(lcount == rcount){
            balanced++;
            lcount = 0;
            rcount = 0;
        }
    }

    cout << balanced << endl;
    lcount = 0;
    rcount = 0;
    string temp = "";

    for(int i = 0; i < s.length(); i++){
        temp += s[i];

        if(s[i] == 'L'){
            lcount++;
        }else if(s[i] == 'R'){
            rcount++;
        }

        if(lcount == rcount){
            cout << temp << endl;
            temp = "";
            lcount = 0;
            rcount = 0;
        }
    }
}