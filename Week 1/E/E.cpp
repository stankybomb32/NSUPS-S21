#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i<n; i++){
        string s;
        getline(cin, s);
        v.push_back(s);
    }

    for(auto s : v){
        int count = 0, res = 0;
        bool oneFound = false;
        for(int i=0; i<s.length(); i++){
            if (oneFound && s[i] == '1'){
                if(s[i-1]== '0'){
                    res +=count;
                    count = 0;
                }
            }
            if(s[i] == '1' && !oneFound){
                oneFound = true;
            }

            if (oneFound && s[i] == '0'){
                count++;
            }
            
        }

        cout << res << endl;
    }
}