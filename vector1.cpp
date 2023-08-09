#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 3, 2, 0, 44, 23, 6, 7};
    vector<int> vec2(vec1);

    for (int &n : vec1)
    {
        cout << n << " ";
    }
    cout << endl
         << endl;
    for (int &m : vec2)
    {
        cout << m << " ";
    }
    cout << endl
         << endl;
    sort(vec1.begin(), vec1.end());
    for (int &n : vec1)
    {
        cout << n << " ";
    }

    return 0;
}