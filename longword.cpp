#include <bits/stdc++.h>
using namespace std;

// Fast IO
// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// Macros
// #define ll long long
// #define vi vector<int>
// #define vll vector<long long>
// #define pii pair<int,int>
// #define all(x) (x).begin(), (x).end()

int main() {
    //fast_io;

    int n;
    cin>>n;

    vector<string> words(n);

    for(int i=0;i<n;i++){
        cin>>words[i];
    }

    for(int i=0;i<n;i++){
        if(words[i].size() > 10){
            int len = words[i].size();
            words[i] = words[i][0] + to_string(len -2) + words[i][len-1];
        }else{
            continue;
        }
    }

    for(int i=0;i<n;i++){
        cout<<words[i]<<endl;
    }
    return 0;
}