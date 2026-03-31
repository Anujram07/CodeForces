#include<iostream>
using namespace std;

long long power(int x, int p){
    long long result = 1;
    for(int i = 0; i < p; i++){
        result *= x;
    }
    return result;
}

long long calCulatesum(int x, int n){
    long long sum = 0;

    for(int i = 0; i <= n; i += 2){
        if(i == 0){
            sum += (power(x, 0) - 1);
        } else {
            sum += power(x, i);
        }
    }

    return sum;
}

int main(){
    int x, n;
    cin >> x >> n;

    cout << calCulatesum(x, n);

    return 0;
}