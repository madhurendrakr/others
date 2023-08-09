#include <bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int s = 0;
    int e = n;
    int ans = -1 ;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        cout << mid << endl;
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square <n)
        {    
             s = mid + 1;
           
        }
        else 
        {
           e = mid - 1;
             
        }
    }
    return ans;
}

int main()
{
    int n ;
     cout<<"Enter n :"<<endl;
     cin>>n;

    int sqrt = binary(n);
    cout << sqrt;

    return 0;
}