#include <bits/stdc++.h> // all header files included.
using namespace std;

vector<int> sort_it(int N)
{
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<int>());
    return A;
}

int main()
{

    
    int N;
    cin >> N;
    vector<int> array = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << array[i];
    }
    cout << endl;
    return 0;
}
