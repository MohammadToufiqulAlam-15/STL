//Mohammad Toufiqul Alam
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v ={2,3,5,5,7,7,1,};
    sort(v.begin(),v.end());
    int Sz = unique(v.begin(),v.end()) - v.begin();

    cout << Sz << endl;
    for( int i = 0; i < Sz; i++) cout << v[i] << " ";
    cout << endl;

    return 0;


}
