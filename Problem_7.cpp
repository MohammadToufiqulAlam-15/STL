//Mohammad Toufiqul Alam
#include<bits/stdc++.h>
using namespace std;


int main()


{  
   //2D vector
   vector< vector<int>> v;

   vector<int> a1 = {2,3,4};
   vector<int> a2 = {2,3,4,5,6};
   v.push_back(a1);
   v.push_back(a2);

   for(auto u:v){
    for(auto g:u)cout << g << " ";
    cout << endl;
   }
   return 0;


}
