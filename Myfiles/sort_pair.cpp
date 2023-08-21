#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> vec2 = {3, 1, 2};
    // vector<char> vec3 = {'G', 'E', 'K'};

    vector<int> vec2 = {10, 15, 5};
    vector<char> vec3 = {'x', 'y', 'z'};
    int n=vec2.size();
    pair<int, char> arr[n]; 

    for (int i = 0; i < n; i++)
    {
        arr[i] = {vec2[i], vec3[i]};
    }
   
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
      cout<<arr[i].second<<" ";
    }
    
    return 0;
}