#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 123456789;
    int ans = 0;
    int i = 1;

    while (num > 0)
    {
        int rem = 0;
        rem = num % 10;
        ans = ans * 10 + rem;
        cout << ans << "             "<<rem<<endl;
        num = num / 10;
        
    }

    // cout << ans << endl;
    return 0;
}