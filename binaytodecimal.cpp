#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int n=1111111 ,i=0;
    int decimal=0;
   while(n>0){
    int rem=111%10;
decimal += rem*pow(2,i);
    n=n/10;
    i++;
   }
    
cout<<decimal<<endl;
return 0;
}