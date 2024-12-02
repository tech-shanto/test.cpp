#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;
        size_t pos = 0;
        while ((pos = S.find(X, pos)) != string::npos)
        {
            S.replace(pos, X.length(), "#");
            pos += 1;
        }
        cout << S << endl;
    }

    return 0;
}