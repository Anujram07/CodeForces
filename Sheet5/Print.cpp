#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    for(int i = 1; i <= a; i++){
        cout << i;
        if(i != a) cout << " ";
    }

    return 0;
}