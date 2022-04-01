#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Y, X, T;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> Y;
        if (Y * (N + 1) >= X)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO";
        }
    }
}