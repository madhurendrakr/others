#include <bits/stdc++.h>
using namespace std;

void count (string s)
{
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl
         << m.size() << endl;


         m.erase(m.begin());
         m.erase(m.begin());
         m.erase(m.begin());
         cout<<endl;
         for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl
         << m.size() << endl;
}

int main()
{
    string str = "jhasdkjhfkusajbfhudsjhfui";
    count(str);
}
