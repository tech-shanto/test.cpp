#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<tuple<string, int, char, int>> students(N);

    for (int i = 0; i < N; ++i)
    {
        string nm;
        int cls, id;
        char s;
        cin >> nm >> cls >> s >> id;
        students[i] = make_tuple(nm, cls, s, id);
    }
    for (int i = 0; i < N / 2; ++i)
    {
        char temp = get<2>(students[i]);
        get<2>(students[i]) = get<2>(students[N - i - 1]);
        get<2>(students[N - i - 1]) = temp;
    }
    for (int i = 0; i < N; ++i)
    {
        cout << get<0>(students[i]) << " "
             << get<1>(students[i]) << " "
             << get<2>(students[i]) << " "
             << get<3>(students[i]) << endl;
    }

    return 0;
}