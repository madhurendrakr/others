#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int num;
    int num2;
    char c;
    double v;
};
class boy
{
public:
    float b;
    double b2;
};

int main()
{
    student a;
    boy b;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(b) + sizeof(a) << endl;

    return 0;
}