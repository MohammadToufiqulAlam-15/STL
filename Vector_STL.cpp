//Mohammad Toufiqul Alam
//HackerRank Challenge
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    vector<int>v;

    cin>>n;
    for(int i =0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    for(auto u:v)cout<<u<<" ";
    cout<<endl;

}
