#include <bits/stdc++.h>
using namespace std;

void decimal_to_binary()
{

    int num;
    vector<int> binary;
    cout << "Enter num:";
    cin >> num;

    while (num > 0)
    {
        int rem = (num & 1);
        binary.push_back(rem);
        num = num >> 1;
    }
    cout << endl;
    for (auto &m : binary)
    {

        cout << m << endl;
    }
}

void binary_to_decimal()
{
    int n1;
    int num=0;
    cout << "Enter binary:";

    cin >> n1;

    for (int i = 0; i > 0; i--)
    {
        if (n1 == 0)
            break;

        int last_bit = n1 & 1;
        num = num + last_bit * pow(2, i);
        n1= n1>>1;
    }
    cout << endl;
    cout << num;
}
int main()
{
    binary_to_decimal();

    // decimal_to_binary();

    return 0;
}