#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,q;
    string s;

    cin >> n >> q;
    cin >> s;

    while(q--){
        string op;
        cin >> op;

        if(op == "pop_back"){
            if(!s.empty()) s.pop_back();
        }

        else if(op == "front"){
            cout << s.front() << endl;
        }

        else if(op == "back"){
            cout << s.back() << endl;
        }

        else if(op == "sort"){
            int l,r;
            cin >> l >> r;
            sort(s.begin()+l-1 , s.begin()+r);
        }

        else if(op == "reverse"){
            int l,r;
            cin >> l >> r;
            reverse(s.begin()+l-1 , s.begin()+r);
        }

        else if(op == "print"){
            int pos;
            cin >> pos;
            cout << s[pos-1] << endl;
        }

        else if(op == "substr"){
            int l,r;
            cin >> l >> r;
            cout << s.substr(l-1 , r-l+1) << endl;
        }

        else if(op == "push_back"){
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}