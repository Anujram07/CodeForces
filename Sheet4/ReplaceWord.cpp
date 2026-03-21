#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0;i<s.length();i++){
        if(i+4<s.length() && s.substr(i,5) == "EGYPT"){
            cout << " ";
            i+=4;
        }else{
            cout<<s[i];
        }
    }
}