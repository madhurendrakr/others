#include <bits/stdc++.h>
using namespace std ;
 
 int main()
{
       list<int> list1={1,6,2,4,9,23,0,5} ;
       for(const auto  & a : list1){
        cout<<a<<" " ;
       }
     cout<<endl;
       list1.sort() ;
       for(const auto  & a : list1){
        cout<<a<<" " ;
       }


return 0;
}