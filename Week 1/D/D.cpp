#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int temp, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
}