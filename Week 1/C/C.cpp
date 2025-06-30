#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int words;

    getline(cin, s);
    if(s.size() > 0) words = 1;
    for(char i: s){
        if(i >= 'A' && i <= 'Z'){
            words++;
        }
    }
    
    cout << words << endl;
}