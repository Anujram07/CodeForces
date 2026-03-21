#include<iostream>
using namespace std;

int main(){
   string s ;
   getline(cin,s);

   int count = 0;
   for(int i = 0 ; i < s.length() ; i++){
    if(isalpha(s[i])){
        if(i == 0 || !isalpha(s[i-1])){
            count++;
        }
    }
   }

   cout << count;


}