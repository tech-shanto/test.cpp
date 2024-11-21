#include <bits/stdc++.h> // all header files included.
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    sort(A.begin(), A.end(), greater<int>());
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
