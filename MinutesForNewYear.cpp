
#include <iostream>
using namespace std;

int main()
{
    int t, m, h, mm, hh;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> m;
        mm = 60 - m;
        hh = 23 - h;
        hh *= 60;
        cout << hh + mm << '\n';
    }
}
