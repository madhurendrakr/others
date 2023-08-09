#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "the some of the other of the fact and the some of the other of the figure of the all of the sem";
    // string str1 = "Madhurendra Kumar";
    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        int m = str[i] - 'a';
        arr[m]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// And the some of the other of the fact and the some of the other of the nation of the all of the fact and the some of the other of the nation of the all of the sem of the all of the sme