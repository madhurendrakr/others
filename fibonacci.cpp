#include <bits/stdc++.h>
using namespace std;

// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     return fib(n - 1) + fib(n - 2);
// }

int main()
{
    int prev1 = 0;
    int prev2 = 1;
    int current;

    for (int i = 0; i < 10; i++)
    {
        if (i ==0)
        {
            cout << prev1 << " ";
        }
       
        else
        {
            current = prev1 + prev2;
            cout << current << " ";
            prev2 = prev1;
            prev1 = current;
        }
        cout<<endl;
    }

    return 0;
}