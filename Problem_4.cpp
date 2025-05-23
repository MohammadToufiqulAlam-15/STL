//Mohammad Toufiqul Alam
#include<bits/stdc++.h>
using namespace std;
int main()

 {

  vector<int> v = {5,3,1,2};

  //Sort(5,3,1)
  sort(v.begin(), v.begin()+3);

  for(auto u : v) cout << u <<" ";
  cout <<endl;


 }
