#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    while (ss>>word)
    {
        if(word == "Jessica"){
            cout << "Yes"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}