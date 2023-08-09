#include <bits/stdc++.h>
using namespace std; 

int main()
{
 vector<int> vec={3,2,1} ;
 next_permutation(vec.begin(),vec.end());
 for (int  i = 0; i <vec.size(); i++)
 {
    cout<<vec[i]<<" ";
 }
 
}