#include <bits/stdc++.h>
using namespace std;

int max_water(vector<int> v)
{
    int size = v.size();
    int l = 0;
    int h = size - 1;
    int maxi = 0;
    while (l < h)
    {
        maxi = max(maxi, min(v[l], v[h]) * (h - l));
 
        if (v[l] > v[h])

            h--;

        else

            l++;
    }
    return maxi;
}

int main()
{
    vector<int> v = {3, 1, 2, 4, 5,7};
    int maxi = max_water(v);
    cout << " max water :" << maxi << endl;
    return 0;
}