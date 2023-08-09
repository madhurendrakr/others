#include <iostream>
using namespace std; 

 
 void swap(int a ,int b){
  int temp=a;
  a=b;
  b=temp;
 }
int main()
{
    int a=9,b=12;
   cout<<"a Value :"<<a<<endl<<" b value :"<<b<<endl;

   swap(a,b);
cout<<"after swaping"<<endl;
   cout<<"a Value :"<<a<<endl<<" b value :"<<b<<endl;

   

    
return 0;
}

an