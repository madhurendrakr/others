#include <bits/stdc++.h>
using namespace std; 


void saynumber(long long n, vector<string> &vec){
   if(n<0)
   return ;
   if(n<=10)
   {
    cout<<vec[n]<<" ";
    return ;
   }

    int rem=n%10;
    n=n/10;

  saynumber(n,vec);
    cout<<vec[rem]<<" ";


}

int main()
{
    long long n;
    cout<<" Enter n: ";
    cin>>n;
    vector<string> vec={"zero","one","two","three","four","five","six","seven","eight","nine","ten"} ;

saynumber(n,vec);

return 0;
}