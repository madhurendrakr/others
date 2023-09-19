#include <iostream>
using namespace std;

int main()
{

    int num1 = 1, num2 = 2000;
    int ans = 0;

    while (num1 <= num2)
    {
        int a = num1;
        int cnt = 0;
        while (a > 0)
        {
            if (a & 1)
            {
                cnt++;
            }
            a = a >> 1;
        }

        if (cnt == 1 || cnt == 4 || cnt == 9 || cnt == 16 || cnt == 25)
        {
            ans++;
        }
        num1++;
    }
    cout << "ans: " << ans << endl;
    return 0;
}