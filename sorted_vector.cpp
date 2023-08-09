#include <bits/stdc++.h>
using namespace std;

int add(vector<int> &vec, int &sum,int size)
{
    if (size == 0)
    {
        return 0;
    }
   
   sum=sum+vec[0];
   
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int sum = 0;
 int size=vec.size();
    add(vec, sum,size);
    cout << sum << endl;

    return 0;
}