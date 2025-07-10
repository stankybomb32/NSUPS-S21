#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long int> input;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long int num;
        cin >> num;
        input.push_back(num);
    }

    for(auto i: input){
        long int sum = 0;
        for(int j=1; j*j<=i; j++){
            if(i%j == 0){
                if (j != i) sum += j;
                long int other = i/j;
                if(other != j && other != i) sum+= other;
            }
        }
        cout << sum << endl;
    }
}