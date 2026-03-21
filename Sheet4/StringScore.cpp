// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     deque<char> dq;

//     for(char c : s){
//         dq.push_back(c);
//     }

//     int score = 0;

//     while(!dq.empty()){
//         char curr = dq.front();
//         dq.pop_front();

//         if(curr == 'V'){
//             score += 5;
//         }
//         else if(curr == 'W'){
//             score += 2;
//         }
//         else if(curr == 'X'){
//             if(!dq.empty()){
//                 dq.pop_front(); // remove next
//             }
//         }
//         else if(curr == 'Y'){
//             if(!dq.empty()){
//                 char next = dq.front();
//                 dq.pop_front();
//                 dq.push_back(next); // move to end
//             }
//         }
//         else if(curr == 'Z'){
//             if(!dq.empty()){
//                 if(dq.front() == 'V'){
//                     score /= 5;
//                     dq.pop_front();
//                 }
//                 else if(dq.front() == 'W'){
//                     score /= 2;
//                     dq.pop_front();
//                 }
//             }
//         }
//     }

//     cout << score;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int score = 0;

    string extra = ""; // for Y operations

    for(int i = 0; i < n; i++){

        if(s[i] == 'V'){
            score += 5;
        }
        else if(s[i] == 'W'){
            score += 2;
        }
        else if(s[i] == 'X'){
            if(i + 1 < n){
                i++; // skip next character
            }
        }
        else if(s[i] == 'Y'){
            if(i + 1 < n){
                extra += s[i + 1]; // store for later
                i++; // skip next
            }
        }
        else if(s[i] == 'Z'){
            if(i + 1 < n){
                if(s[i + 1] == 'V'){
                    score /= 5;
                    i++;
                }
                else if(s[i + 1] == 'W'){
                    score /= 2;
                    i++;
                }
            }
        }
    }

    // process moved characters (Y)
    for(char c : extra){
        if(c == 'V') score += 5;
        else if(c == 'W') score += 2;
    }

    cout << score;
}