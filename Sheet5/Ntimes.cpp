#include<iostream>
using namespace std;

void printChar(int n, char c){
    for(int i = 0; i < n; i++){
        cout << c;
        if(i != n - 1) cout << " ";  
    }
    cout << endl;
}

int main(){
    int t, n;
    char c;
    cin >> t;

    while(t--){
        cin >> n >> c;
        printChar(n, c);   
    }

    return 0;
}