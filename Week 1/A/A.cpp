#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string text;
    vector<vector<int>> arr;
    vector<int> answers;
    int lastAnswer = 0;
    int n, q;

    getline(cin, text);
    stringstream ss(text);
    ss >> n;
    ss >> q;

    vector<int> empty;
    empty.clear();
    arr.assign(n, empty);

    for(int i=0;i<q;i++){

        getline(cin, text);
        stringstream ss(text);

        int j, x, y;
        ss >> j;
        ss >> x;
        ss >> y;
        int idx = (x ^ lastAnswer) % n;
        if(j== 1){
            arr[idx].push_back(y);
        }
        else if(j==2){
            lastAnswer = arr[idx][y%arr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }

    for(int i: answers){
        cout << i << endl;
    }
}