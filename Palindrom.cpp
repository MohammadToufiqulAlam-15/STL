//Mohammad Toufiqul Alam
#include<bits/stdc++.h>
using namespace std;

int main()

{

    string s = "aabaa";
    string tmp = s;
    reverse( tmp.begin(),tmp.end());

    if ( s == tmp) cout << "Palindrom" <<endl;
    else cout << "Not Palindrom" << endl;

    return 0;



}