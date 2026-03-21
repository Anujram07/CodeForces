#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    for(int i = 0; i < s.size(); i++){
        if(n == 1){
            int index = Original.find(s[i]); 
            s[i] = key[index];               
        } else {
            int index = key.find(s[i]);     
            s[i] = Original[index];         
        }
    }

    cout << s;

    return 0;
}