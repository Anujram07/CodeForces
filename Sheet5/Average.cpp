#include<iostream>
using namespace std;

void average(long arr[], int n){
    long sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << avg;
}

int main(){
    int n;
    cin >> n;

    long arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    average(arr, n);  
    return 0;
}