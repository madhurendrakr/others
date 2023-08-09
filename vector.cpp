#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> vec;
    vector<int> vec1;
    int count = 0;
    for (int i = 1 ;i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
          vec[i][j]==count++;
            // vec1.push_back(count++) ;
        }
        // vec.push_back(vec1);
        // vec1.clear();
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        // cout << vec[i][k]<< ": ";
        for (int j = 0; j < 10; j++)
        {
            cout <<vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}